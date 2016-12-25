/*****************************************************************************
** QNapi
** Copyright (C) 2008-2016 Piotr Krzemiński <pio.krzeminski@gmail.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
*****************************************************************************/

#ifndef GENERALCONFIG_H
#define GENERALCONFIG_H

#include <QString>

enum SearchPolicy2
{
    SP_BREAK_IF_FOUND_2 = 0,
    SP_SEARCH_ALL_2 = 1,
    SP_SEARCH_ALL_WITH_BACKUP_LANG_2 = 2
};

enum DownloadPolicy2
{
    DP_ALWAYS_SHOW_LIST_2 = 0,
    DP_SHOW_LIST_IF_NEEDED_2 = 1,
    DP_NEVER_SHOW_LIST_2  = 2
};


class GeneralConfig {
private:
    QString p7zipPath_;
    QString tmpPath_;
    QString language_;
    QString backupLanguage_;
    bool noBackup_;
    bool quietBatch_;
    SearchPolicy2 searchPolicy_;
    DownloadPolicy2 downloadPolicy_;
    bool changePermissionsEnabled_;
    QString changePermissionsTo_;

public:
    GeneralConfig(const QString & p7zipPath,
                  const QString & tmpPath,
                  const QString & language,
                  const QString & backupLanguage,
                  const bool & noBackup,
                  const bool & quietBatch,
                  const SearchPolicy2 & searchPolicy,
                  const DownloadPolicy2 & downloadPolicy,
                  const bool & changePermissionsEnabled,
                  const QString & changePermissionsTo)
        : p7zipPath_(p7zipPath),
          tmpPath_(tmpPath),
          language_(language),
          backupLanguage_(backupLanguage),
          noBackup_(noBackup),
          quietBatch_(quietBatch),
          searchPolicy_(searchPolicy),
          downloadPolicy_(downloadPolicy),
          changePermissionsEnabled_(changePermissionsEnabled),
          changePermissionsTo_(changePermissionsTo)
        {}

    QString p7zipPath() const { return p7zipPath_; }
    QString tmpPath() const { return tmpPath_; }
    QString language() const { return language_; }
    QString backupLanguage() const { return backupLanguage_; }
    bool noBackup() const { return noBackup_; }
    bool quietBatch() const { return quietBatch_; }
    SearchPolicy2 searchPolicy() const { return searchPolicy_; }
    DownloadPolicy2 downloadPolicy() const { return downloadPolicy_; }
    bool changePermissionsEnabled() const { return changePermissionsEnabled_; }
    QString changePermissionsTo() const { return changePermissionsTo_; }

    const GeneralConfig setP7zipPath(const QString & p7zipPath) const {
        return GeneralConfig(p7zipPath, tmpPath_, language_, backupLanguage_, noBackup_, quietBatch_, searchPolicy_, downloadPolicy_, changePermissionsEnabled_, changePermissionsTo_);
    }
    const GeneralConfig setTmpPath(const QString & tmpPath) const {
        return GeneralConfig(p7zipPath_, tmpPath, language_, backupLanguage_, noBackup_, quietBatch_, searchPolicy_, downloadPolicy_, changePermissionsEnabled_, changePermissionsTo_);
    }
    const GeneralConfig setLanguage(const QString & language) const {
        return GeneralConfig(p7zipPath_, tmpPath_, language, backupLanguage_, noBackup_, quietBatch_, searchPolicy_, downloadPolicy_, changePermissionsEnabled_, changePermissionsTo_);
    }
    const GeneralConfig setBackupLanguage(const QString & backupLanguage) const {
        return GeneralConfig(p7zipPath_, tmpPath_, language_, backupLanguage, noBackup_, quietBatch_, searchPolicy_, downloadPolicy_, changePermissionsEnabled_, changePermissionsTo_);
    }
    const GeneralConfig setNoBackup(const bool & noBackup) const {
        return GeneralConfig(p7zipPath_, tmpPath_, language_, backupLanguage_, noBackup, quietBatch_, searchPolicy_, downloadPolicy_, changePermissionsEnabled_, changePermissionsTo_);
    }
    const GeneralConfig setQuietBatch(const bool & quietBatch) const {
        return GeneralConfig(p7zipPath_, tmpPath_, language_, backupLanguage_, noBackup_, quietBatch, searchPolicy_, downloadPolicy_, changePermissionsEnabled_, changePermissionsTo_);
    }
    const GeneralConfig setSearchPolicy(const SearchPolicy2 & searchPolicy) const {
        return GeneralConfig(p7zipPath_, tmpPath_, language_, backupLanguage_, noBackup_, quietBatch_, searchPolicy, downloadPolicy_, changePermissionsEnabled_, changePermissionsTo_);
    }
    const GeneralConfig setDownloadPolicy(const DownloadPolicy2 & downloadPolicy) const {
        return GeneralConfig(p7zipPath_, tmpPath_, language_, backupLanguage_, noBackup_, quietBatch_, searchPolicy_, downloadPolicy, changePermissionsEnabled_, changePermissionsTo_);
    }
    const GeneralConfig setChangePermissionsEnabled(const bool & changePermissionsEnabled) const {
        return GeneralConfig(p7zipPath_, tmpPath_, language_, backupLanguage_, noBackup_, quietBatch_, searchPolicy_, downloadPolicy_, changePermissionsEnabled, changePermissionsTo_);
    }
    const GeneralConfig setChangePermissionsTo(const QString & changePermissionsTo) const {
        return GeneralConfig(p7zipPath_, tmpPath_, language_, backupLanguage_, noBackup_, quietBatch_, searchPolicy_, downloadPolicy_, changePermissionsEnabled_, changePermissionsTo);
    }

    QString toString() const;
};

#endif