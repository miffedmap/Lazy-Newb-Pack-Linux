Lazy-Newb-Pack-Linux V0.40.14
====================

A small package to get people started with Dwarf Fortress on linux. Please take time to check out the [Official thread](http://www.bay12forums.com/smf/index.php?topic=140966.0). There are a few help documents in the [Wiki](https://github.com/Lazy-Newb-Pack/Lazy-Newb-Pack-Linux/wiki) if you should get stuck.


#### Linux Download 




 

#### Other Versions
 

Similar packages also available in windows and Mac:

Windows Version: [PeridexisErrant's Starter Pack](http://www.bay12forums.com/smf/index.php?topic=126076.0)

Mac Version: [Fricy's MacNewbie Pack](http://www.bay12forums.com/smf/index.php?topic=128960.0)


Included Mods
-------------
* [Pidgeot's PyLNP 0.7.1 Lazy Newb Pack Python interface](http://www.bay12forums.com/smf/index.php?topic=140808.0)
* Utilities:
    * [DFhack Linux V0.40.14 R1 (gcc 4.5.4)](http://www.bay12forums.com/smf/index.php?topic=139553.0)
    * [Dwarf Therapist v27](https://github.com/splintermind/Dwarf-Therapist/tree/DF2014) 
    * [Soundsense r43](http://df.zweistein.cz/soundsense/) (need to run auto update on first use)
    * [qfconvert 2.04](http://www.joelpt.net/quickfort/)
    * [chromafort 2010-04-25](http://www.bay12forums.com/smf/index.php?topic=55025.0)
    * [DF Announcement Filter 1.01](http://www.bay12forums.com/smf/index.php?topic=130030.0)
    * [World Viewer for DF 40.0x](http://www.bay12forums.com/smf/index.php?topic=128932.0) (works with wine)
* Tilesets (Now using [fricy's Updated tilesets](https://github.com/fricy/DFgraphics)!)
    - [12x8] ASCII [Default]
    - [16x16] ASCII
    - [16x16] [Afro's Graphics Pack 1.33](http://dffd.wimbli.com/file.php?id=9137)
    - [24x24] [BurnedFX](http://www.bay12forums.com/smf/index.php?topic=143588.0)
    - [16x16] [CLA v0.40.0x](http://www.bay12forums.com/smf/index.php?topic=105376.0)
    - [15x15] [Duerer](http://www.bay12forums.com/smf/index.php?topic=142083.0)
    - [32x32] [DawnFortress v0.28](http://www.bay12forums.com/smf/index.php?topic=136221.msg4992910#msg4992910)
    - [12x12] [Grim Fortress 1.2](http://www.bay12forums.com/smf/index.php?topic=122421.0)
    - [16x16] [Phoebus v0.40.0x](http://www.bay12forums.com/smf/index.php?topic=137096.0)
    - [16x16] [Ironhand v0.40.0x](http://dffd.wimbli.com/file.php?id=8747)
    - [16x16] [Mayday v0.40.0x](http://goblinart.pl/vg-eng/df.php) with [Doren's additions](http://www.bay12forums.com/smf/index.php?topic=141195.0)
    - [16x16] MLC ASCII Tileset for TWBT
    - [12x12] [Jolly Bastion](http://www.bay12forums.com/smf/index.php?topic=104261.0)
    - [16x16] [Obsidian  graphics pack 40.x unofficial update](http://www.bay12forums.com/smf/index.php?topic=126934.0)
    - [16x20] [Shizzle 1.3](http://dffd.wimbli.com/file.php?id=7205)
    - [16x16] [Spacefox Afro v40.x](http://dffd.wimbli.com/file.php?id=9137)
    - [20x20] [Taffer XVI](http://www.bay12forums.com/smf/index.php?topic=107924.0)
    - [24x24] [Vherid v6](http://www.bay12forums.com/smf/index.php?topic=89856.0)

 also includes
 * [Captian Duck's DF2014 Embark Profile V3](http://www.reddit.com/r/dwarffortress/comments/2bzrqg/dfvidtuts2014_embark_profile_beta_testing/)
 * [Dwarf Therapist user Guide by ResMar](http://dffd.wimbli.com/file.php?id=7889)
 * Community Quickfort blueprints




DF 40.14 Release notes:
-------------

Here is the next release. The focus was not bugs this time, but rather completing the work started on emotions as well as basic fruit harvesting. A note -- adding stepladders to old saves was not possible, so you'll have to wait for a new world for those. Fallen fruit can still be gathered in old saves using the new plant gathering zones. Dwarves in old saves have also had their current thoughts wiped clean to make way for the new emotion/circumstance pairs.
—Toady One, October 25, 2014

**Major bug fixes**

  * Dwarf thoughts have been replaced with personality-dependent emotion/circumstance pairs
  * Dwarf happiness has been replaced by a longer-term stress level, and a few new effects have been added
  * Plant gathering zones can be used to set up fruit harvesting from trees using the new stepladder
  * Plant gathering zones can also handle the old shrub jobs, and fallen fruit can also be gathered from zones
  * Shrubs now have their berries/etc. gathered properly (bean-type plants that only have edible seeds are still an issue)
  * As a stopgap, farm plot plants yield viable growths out of season upon harvest
  * In adventure mode, it is possible to ask about people about yourself, other people, and how they are feeling


**Other bug fixes/tweaks**

  * Stopped IMMOBILE creatures from trying to flee terrain
  * Fixed problem with fear vs. stating proper opinion
  * Stopped harvest/plant jobs from being added to farms slated for destruction
  * Deconstructed farm plot loses items

-------------

#   Dependencies

   Install required packages

 For Debian / Ubuntu
```
sudo apt-get install default-jre libsdl1.2debian:i386 libsdl-image1.2:i386 libsdl-ttf2.0-0:i386 libglu1-mesa:i386 libgtk2.0-0:i386 libopenal1:i386 libjpeg62:i386 git mercurial wget coreutils tar unzip unrar make g++ gcc patch xterm sed python bzip2 qtchooser qtbase5-dev qtbase5-dev-tools qtscript5-dev qt5-qmake libqt5script5 libqt5scripttools5 libqxt-core0 libqxt-gui0
```


  System Requirements
-------------

* A Java runtime environment for the LNP GUI.
* SDL 1.2, 32-bit
* LibGLU 1, 32-bit
* LibGTK 2.0, 32-bit
* OpenAL 1.2, 32-bit
* LibJPEG 6.2, 32-bit
* Git
* Mercurial (hg)
* Qt5 Development Libraries including qmake
* Python 2.x (for Quickfort)
* The following fairly standard Linux utilities:
  - wget
  - sha1sum
  - sed
  - tar
  - unzip
  - unrar
  - make
  - g++
  - gcc
  - xterm

 Usage
=====

```
Usage: ./startlnp
```


Tested On
=========
* Ubuntu 14.04 "Trusty Tahr"      fresh install.
 

Common Issues
=============
See [the WIKI](https://github.com/BeauBouchard/DF-Lazy-Newb-Pack/wiki).

Credits & Special Thanks
=============

 * [@andrewd18](https://github.com/andrewd18/) Andrew Dorney made the awesome linux LNP isntaller script
 * [@amfournda](https://github.com/amfournda/) Created a great gentoo fix script included in the pack
 * [@Captain Duck](https://www.youtube.com/playlist?list=PL06686270DA5FF439) 
 * [@Daveralph](https://github.com/daveralph1234/LazyNewbPack/) continued working on LNP after Dricus 
 * [@Dricus](https://github.com/Dricus)   Dirk Groot is the creator of the cross platform LNP port
 * [@Dwimenor](https://github.com/Dwimenor/) Created a workaround for LNP, as well as providing linux support
 * [@fricy](https://github.com/fricy/) Maintains the MacNewbie pack Reborn as well as supporting essential gaphic repo
 * [@joelpt](http://www.joelpt.net/quickfort/) Joel Thornton Created Quickfort 2.x
 * [@LucasUP](https://github.com/LucasUP/) Lucas Paquette made the orginal windows LNP 
 * [@splintermind](https://github.com/splintermind/) Josh, part time wizard works dilligently on Dwarf Therapist
 * [@PeridexisErrant](http://www.bay12forums.com/smf/index.php?topic=126076.0)
 * [@Pidgeot](https://bitbucket.org/Pidgeot/python-lnp/) Michael is a Founding developer of PyLNP
 * [@runrobotrun](http://www.bay12forums.com/smf/index.php?topic=55025.0) Created Chromafort
 * [@Zweistein](http://zweistein.cz/) Created Soundsense



If I forgot people, please let me know and I'll include them in the list.




