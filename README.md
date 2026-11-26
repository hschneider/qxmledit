## Where is the macOS binary?

For the impatient reader - you'll find it here:
```
_dist/QXmlEdit-0.9.18.dmg
```

Requirements are 

- macOS >= 27.2
- Apple Silicon

If your specs are lower, you can still use the original release on Intel or Apple Silicon under Rosetta2:
https://github.com/lbellonda/qxmledit

I ported this project from QT5 to QT6 with the awesome CLAUDE CLI. Some minor things have been changed or removed. For details see the [QT6 Port](#qt-6-port) section below.

# QXmlEdit

QXmlEdit is a simple XML editor based on qt libraries. Its main features are unusual data visualization modes,
nice XML manipulation and presentation and it is multi platform. It can split very big XML files
into fragments, and compare XML files. It is one of the few graphical Open Source XSD viewers.

The XML editor widget is based on a library that can be imported and used in other applications.

It is relased under GNU LGPL V2 license and requires Open Source edition of the Qt6 libraries.

- Hierarchical customizable view of XML elements.
- Fast XML hierarchy navigation.
- Split of big XML files.
- Search supporting XPath expressions.
- Base 64 data handling.
- Visualization styles.
- XML Schema (XSD) viewer.
- Columnar view.
- Sessions handling.
- Graphical XML file view.
- Map view of a XML document.
- Split and fragment extraction of big XML files.
- Visual compare of XML Schema files.
- Visual compare of XML files.
- XML Snippets.
- XSL specialized mode.
- Element display via user customizable rules.
- SCXML edit mode.

Some icon files are licensed by oxygen project and covered by LGPL V3 (see <http://www.oxygen-icons.org>).
A copy of the license is included. Source for icons can be obtained from site above, but a copy is included in `images/svg`
source directory. All icons in this directory are by oxygen project. Images in `images` directory are derived by oxygen,
excluding `mainIcons.icns`, `icon.png` and `icon.svg` that are original work.
QXmlEdit can be linked with QwtPlot3D library.

## Site and source code

- The project site is: [qxmledit.org](http://qxmledit.org)
- The source code link is currently: <https://github.com/lbellonda/qxmledit>

## Discussion group

<http://groups.google.com/group/qxmledit-discuss>

## Release tarballs and binary packages

<https://sourceforge.net/projects/qxmledit/files>

## Requirements

- Qt 6 libraries are required, including the Qt5Compat module (Qt 4 and Qt 5 are not supported).
- libxml2 and libxslt are required.
- QwtPlot3D (and therefore OpenGL) is not supported and must be disabled at compile time.

See [Qt 6 port](#qt-6-port) below for details and the minimum OS requirements.

## Limitations

Very limited support of DTD.

## Qt 6 port

This version has been ported to Qt 6 and builds with Qt 6 only.
Qt 4 and Qt 5 are not supported anymore.

### What changed

- QtXmlPatterns does not exist in Qt 6. It has been replaced by libxml2 and
  libxslt, which are now required to build QXmlEdit:
  - XSD validation uses libxml2. Schemas referenced by the document via
    `xsi:schemaLocation` or `xsi:noNamespaceSchemaLocation` are still honored.
  - XPath search uses the libxml2 XPath 1.0 engine.
  - The built-in XSLT engine is now libxslt (XSLT 1.0).
- The Qt5Compat module (QtCore5Compat) is required. It provides the text
  codecs, `QRegExp` and the SAX reader that are no longer part of Qt Core.
- Qt 6 can only write UTF encodings through `QXmlStreamWriter` and `QTextStream`.
  A converting device has been added, so files can still be saved, split and
  anonymized in any encoding supported by the codecs, with the correct
  encoding in the XML declaration.
- The QtMacExtras and QtWinExtras modules are no longer used (they do not exist
  in Qt 6). The macOS dock menu is set with Qt's own API; the dock icon badge
  is not available anymore.
- Qt 6 normalizes CR LF line endings inside CDATA sections when reading a file,
  as the XML specification requires. For this reason the "denormalize EOL"
  compare option cannot detect line ending differences in CDATA anymore.

### Functionality lost in the port

- XQuery is not supported anymore.
- XPath 2.0 is not supported: search expressions must be XPath 1.0
  (for instance `=` instead of `eq`, no XPath 2.0 functions).
- The built-in XSLT engine supports XSLT 1.0 only. XSLT 2.0 stylesheets
  require the external Saxon processor (option `-saxon` from the command line).
- QwtPlot3D (3D data visualization) has not been ported and must be disabled
  when building (`QXMLEDIT_NO_QWTPLOT=1`).

### Minimum OS requirements

- The signed and notarized macOS disk image is `_dist/QXmlEdit-0.9.18.dmg`
  (relative to the project directory).
- The macOS application bundle is built for Apple Silicon (arm64) only and
  requires macOS 27.2 or later, because the Qt libraries it bundles (Homebrew
  Qt 6.12) are built for that version. The QXmlEdit code itself targets
  macOS 14.4: building against a Qt 6 that supports older macOS releases
  (e.g. the official Qt installer) lowers the requirement to that of Qt.
- On other platforms the minimum is that of the Qt 6 version used to build.
  The port has been built and tested on macOS only.

## License and notes on QwtPlot3D

QXmlEdit is released under LGPL V2, includes Oxygen icons and optionally can link
with QwtPlot3D library. QwtPlot3D is not part of QXmlEdit and its source is
included for convenience when compiling.
QwtPlot3D comes with its own license (ZLib like) as specified in its files.
You are free to link or not with QwtPlot3D by enabling a compile time switch
as defined in the `INSTALL` file or to replace it.
QwtPlot3D requires OpenGL.

As a special exception, the copyright holders of QXmlEdit give you permission to combine
QXmlEdit with free software programs or libraries that are released under the GNU LGPL
and with code included in the standard release of QwtPlot3D (under the ZLib like license)
or modified versions of such code, with unchanged license.
You may copy and distribute such a system following the terms of the
GNU LGPL for QXmlEdit and the licenses of the other code concerned.
People who make modified versions of QXmlEdit are not obligated to grant this special
exception for their modified versions; it is their choice whether to do so.
The GNU Library General Public License gives permission to release a modified version
without this exception; this exception also makes it possible to release a modified
version which carries forward this exception.
