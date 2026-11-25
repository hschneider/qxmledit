# libxml2 and libxslt: XSD validation, XPath search and XSLT (replace Qt5 QtXmlPatterns)
macx {
    LIBS += -lxml2 -lxslt
} else:unix {
    CONFIG += link_pkgconfig
    PKGCONFIG += libxml-2.0 libxslt
}
