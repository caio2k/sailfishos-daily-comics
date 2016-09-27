/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#include "SafelyEndangered.h"

#include <QDebug>

SafelyEndangered::SafelyEndangered(QObject *parent) :
    Comic(parent)
{
    m_info.id             = QString("safelyendangered");
    m_info.name           = QString("Safely Endangered");
    m_info.color          = QColor(71, 89, 127);
    m_info.authors        = QStringList("Chris McCoy");
    m_info.homepage       = QUrl("http://www.safelyendangered.com/");
    m_info.language       = QLocale::English;
    m_info.stripSourceUrl = QUrl("http://www.safelyendangered.com/");
}

QUrl SafelyEndangered::extractStripImageUrl(QByteArray data)
{
    return regexExtractStripImageUrl(data, "<img[^>]*src=\"([^\"]*/wp-content/uploads/[^\"]*)\"");
}
