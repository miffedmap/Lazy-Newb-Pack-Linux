﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Linq;

namespace DFWV.WorldClasses.HistoricalFigureClasses
{
    struct SiteLink
    {
        public static List<string> LinkTypes = new List<string>();
        public int LinkType { get; private set; }
        public int SiteID { get; private set; }
        private int? SubID { get; set; }
        public int? EntityID { get; private set; }
        public HistoricalFigure HF { get; private set; }

        public Entity Entity
        {
            get
            {
                return EntityID.HasValue && HF.World.Entities.ContainsKey(EntityID.Value) ? HF.World.Entities[EntityID.Value] : null;
            }
        }

        public Site Site
        {
            get
            {
                return HF.World.Sites[SiteID];
            }
        }
        public SiteLink(XContainer data, HistoricalFigure hf) : this()
        {
            var linktypename = data.Element("link_type").Value;
            if (!LinkTypes.Contains(linktypename))
                LinkTypes.Add(linktypename);
            LinkType = LinkTypes.IndexOf(linktypename);

            SiteID = Convert.ToInt32(data.Element("site_id").Value);
            if (data.Elements("sub_id").Count() != 0)
                SubID = Convert.ToInt32(data.Element("sub_id").Value);
            if (data.Elements("entity_id").Count() != 0)
                EntityID = Convert.ToInt32(data.Element("entity_id").Value);

            HF = hf;
        }

        public override string ToString()
        {
            if (Site == null)
                return LinkType + ": " + SiteID;
            return LinkType + ": " + Site.Name;
        }

        internal void Export(int HFID)
        {
            var table = "HF_" + GetType().Name;



            var vals = new List<object> { HFID, LinkTypes[LinkType], SiteID, SubID, EntityID };


            Database.ExportWorldItem(table, vals);

        }

    }
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              