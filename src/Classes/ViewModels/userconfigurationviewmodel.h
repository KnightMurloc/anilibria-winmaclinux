/*
    AniLibria - desktop client for the website anilibria.tv
    Copyright (C) 2021 Roman Vladimirov

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef USERCONFIGURATIONVIEWMODEL_H
#define USERCONFIGURATIONVIEWMODEL_H

#include <QObject>

class UserConfigurationViewModel : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int opacityPlayerPanel READ opacityPlayerPanel WRITE setOpacityPlayerPanel NOTIFY opacityPlayerPanelChanged)
    Q_PROPERTY(bool notCloseReleaseCardAfterWatch READ notCloseReleaseCardAfterWatch WRITE setNotCloseReleaseCardAfterWatch NOTIFY notCloseReleaseCardAfterWatchChanged)
    Q_PROPERTY(bool usingScrollAcceleration READ usingScrollAcceleration WRITE setUsingScrollAcceleration NOTIFY usingScrollAccelerationChanged)
    Q_PROPERTY(bool hideStatistics READ hideStatistics WRITE setHideStatistics NOTIFY hideStatisticsChanged)
    Q_PROPERTY(bool hideUpdatesByFavorites READ hideUpdatesByFavorites WRITE setHideUpdatesByFavorites NOTIFY hideUpdatesByFavoritesChanged)
    Q_PROPERTY(bool hideUpdatesFromStart READ hideUpdatesFromStart WRITE setHideUpdatesFromStart NOTIFY hideUpdatesFromStartChanged)
    Q_PROPERTY(bool hideUpdatesLastTwoDays READ hideUpdatesLastTwoDays WRITE setHideUpdatesLastTwoDays NOTIFY hideUpdatesLastTwoDaysChanged)
    Q_PROPERTY(bool hideAbandonedSeens READ hideAbandonedSeens WRITE setHideAbandonedSeens NOTIFY hideAbandonedSeensChanged)
    Q_PROPERTY(bool markAsReadAfterDownload READ markAsReadAfterDownload WRITE setMarkAsReadAfterDownload NOTIFY markAsReadAfterDownloadChanged)
    Q_PROPERTY(QString startPage READ startPage WRITE setStartPage NOTIFY startPageChanged)
    Q_PROPERTY(bool hideRecommendByGenres READ hideRecommendByGenres WRITE setHideRecommendByGenres NOTIFY hideRecommendByGenresChanged)
    Q_PROPERTY(bool hideWillWatch READ hideWillWatch WRITE setHideWillWatch NOTIFY hideWillWatchChanged)
    Q_PROPERTY(bool showedVideoForNewcomers READ showedVideoForNewcomers WRITE setShowedVideoForNewcomers NOTIFY showedVideoForNewcomersChanged)
    Q_PROPERTY(bool autoSkipOpening READ autoSkipOpening WRITE setAutoSkipOpening NOTIFY autoSkipOpeningChanged)
    Q_PROPERTY(bool hideSkipOpening READ hideSkipOpening WRITE setHideSkipOpening NOTIFY hideSkipOpeningChanged)
    Q_PROPERTY(bool fixedControlPanel READ fixedControlPanel WRITE setFixedControlPanel NOTIFY fixedControlPanelChanged)
    Q_PROPERTY(bool hidedQuality READ hidedQuality WRITE setHidedQuality NOTIFY hidedQualityChanged)
    Q_PROPERTY(bool hidedSpeed READ hidedSpeed WRITE setHidedSpeed NOTIFY hidedSpeedChanged)
    Q_PROPERTY(int playerBuffer READ playerBuffer WRITE setPlayerBuffer NOTIFY playerBufferChanged)
    Q_PROPERTY(bool usingVideoProxy READ usingVideoProxy WRITE setUsingVideoProxy NOTIFY usingVideoProxyChanged)
    Q_PROPERTY(QString torrentStreamPath READ torrentStreamPath WRITE setTorrentStreamPath NOTIFY torrentStreamPathChanged)
    Q_PROPERTY(bool removeAllDownloadedTorrent READ removeAllDownloadedTorrent WRITE setRemoveAllDownloadedTorrent NOTIFY removeAllDownloadedTorrentChanged)

private:
    QString m_cacheFileName { "userconfiguration.cache" };
    QString m_opacityPlayerPanelField { "opacityPlayerPanel" };
    QString m_notCloseReleaseCardAfterWatchField { "notCloseReleaseCardAfterWatch" };
    QString m_usingScrollAccelerationField { "usingScrollAcceleration" };
    QString m_hideStatisticsField { "hideStatisticsField" };
    QString m_hideUpdatesByFavoritesField { "hideUpdatesByFavorites" };
    QString m_hideUpdatesFromStartField { "hideUpdatesFromStart" };
    QString m_hideUpdatesLastTwoDaysField { "hideUpdatesLastTwoDays" };
    QString m_hideAbandonedSeensField { "hideAbandonedSeens" };
    QString m_markAsReadAfterDownloadField { "markAsReadAfterDownload" };
    QString m_startPageField { "startPage" };
    QString m_hideRecommendByGenresField { "hideRecommendByGenres" };
    QString m_hideWillWatchField { "hideWillWatchField" };
    QString m_showedVideoForNewcomersField { "showedVideoForNewcomers" };
    QString m_autoSkipOpeningField { "autoSkipOpening" };
    QString m_hideSkipOpeningField { "hideSkipOpening" };
    QString m_fixedControlPanelField { "fixedControlPanel" };
    QString m_hidedQualityField { "hidedQuality" };
    QString m_hidedSpeedField { "hidedSpeed" };
    QString m_playerBufferField { "torrentStreamBuffer" };
    QString m_usingVideoProxyField { "usingVideoProxy" };
    QString m_torrentStreamPathField { "torrentStreamPath" };
    QString m_removeAllDownloadedTorrentField { "removeAllDownloadedTorrent" };
    int m_opacityPlayerPanel { 50 };
    bool m_notCloseReleaseCardAfterWatch { false };
    bool m_usingScrollAcceleration { true };
    bool m_hideStatistics { false };
    bool m_hideUpdatesByFavorites { false };
    bool m_hideUpdatesFromStart { false };
    bool m_hideUpdatesLastTwoDays { false };
    bool m_hideAbandonedSeens { false };
    bool m_markAsReadAfterDownload { false };
    QString m_startPage { "release" };
    bool m_hideRecommendByGenres { false };
    bool m_hideWillWatch { false };
    bool m_showedVideoForNewcomers { false };
    bool m_autoSkipOpening { false };
    bool m_hideSkipOpening { false };
    bool m_fixedControlPanel { false };
    bool m_hidedQuality { false };
    bool m_hidedSpeed { false };
    int m_playerBuffer { 0 };
    bool m_usingVideoProxy { false };
    QString m_torrentStreamPath { "" };
    bool m_removeAllDownloadedTorrent { false };

public:
    explicit UserConfigurationViewModel(QObject *parent = nullptr);

    bool notCloseReleaseCardAfterWatch() const noexcept { return m_notCloseReleaseCardAfterWatch; }
    void setNotCloseReleaseCardAfterWatch(const bool notCloseReleaseCardAfterWatch) noexcept;

    int opacityPlayerPanel() const noexcept { return m_opacityPlayerPanel; }
    void setOpacityPlayerPanel(int opacityPlayerPanel) noexcept;

    bool usingScrollAcceleration() const noexcept { return m_usingScrollAcceleration; }
    void setUsingScrollAcceleration(const bool usingScrollAcceleration) noexcept;

    bool hideStatistics() const noexcept { return m_hideStatistics; };
    void setHideStatistics(const bool hideStatistics) noexcept;

    bool hideUpdatesByFavorites() const noexcept { return m_hideUpdatesByFavorites; };
    void setHideUpdatesByFavorites(const bool hideUpdatesByFavorites) noexcept;

    bool hideUpdatesFromStart() const noexcept { return m_hideUpdatesFromStart; };
    void setHideUpdatesFromStart(const bool hideUpdatesFromStart) noexcept;

    bool hideUpdatesLastTwoDays() const noexcept { return m_hideUpdatesLastTwoDays; }
    void setHideUpdatesLastTwoDays(const bool hideUpdatesLastTwoDays) noexcept;

    bool hideAbandonedSeens() const noexcept { return m_hideAbandonedSeens; }
    void setHideAbandonedSeens(const bool hideAbandonedSeens) noexcept;

    bool markAsReadAfterDownload() const noexcept { return m_markAsReadAfterDownload; }
    void setMarkAsReadAfterDownload(const bool markAsReadAfterDownload) noexcept;

    QString startPage() const noexcept { return m_startPage; }
    void setStartPage(const QString& startPage) noexcept;

    bool hideRecommendByGenres() const noexcept { return m_hideRecommendByGenres; }
    void setHideRecommendByGenres(const bool hideRecommendByGenres) noexcept;

    bool hideWillWatch() const noexcept { return m_hideWillWatch; }
    void setHideWillWatch(bool hideWillWatch) noexcept;

    bool showedVideoForNewcomers() const noexcept { return m_showedVideoForNewcomers; }
    void setShowedVideoForNewcomers(bool showedVideoForNewcomers) noexcept;

    bool autoSkipOpening() const noexcept { return m_autoSkipOpening; }
    void setAutoSkipOpening(bool autoSkipOpening) noexcept;

    bool hideSkipOpening() const noexcept { return m_hideSkipOpening; }
    void setHideSkipOpening(bool hideSkipOpening) noexcept;

    bool fixedControlPanel() const noexcept { return m_fixedControlPanel; }
    void setFixedControlPanel(bool fixedControlPanel) noexcept;

    bool hidedQuality() const noexcept { return m_hidedQuality; }
    void setHidedQuality(bool hidedQuality) noexcept;

    bool hidedSpeed() const noexcept { return m_hidedSpeed; }
    void setHidedSpeed(bool hidedSpeed) noexcept;

    int playerBuffer() const noexcept { return m_playerBuffer; }
    void setPlayerBuffer(int playerBuffer) noexcept;

    bool usingVideoProxy() const noexcept { return m_usingVideoProxy; }
    void setUsingVideoProxy(bool usingVideoProxy) noexcept;

    QString torrentStreamPath() const noexcept { return m_torrentStreamPath; }
    void setTorrentStreamPath(const QString& torrentStreamPath) noexcept;

    bool removeAllDownloadedTorrent() const noexcept { return m_removeAllDownloadedTorrent; }
    void setRemoveAllDownloadedTorrent(bool removeAllDownloadedTorrent) noexcept;

    Q_INVOKABLE void refreshConfiguration() noexcept;
    Q_INVOKABLE void saveSettingsToFile();

private:
    void readSettingsFromFile();

signals:
    void opacityPlayerPanelChanged();
    void notCloseReleaseCardAfterWatchChanged();
    void usingScrollAccelerationChanged();
    void hideStatisticsChanged();
    void hideUpdatesByFavoritesChanged();
    void hideUpdatesFromStartChanged();
    void hideUpdatesLastTwoDaysChanged();
    void hideAbandonedSeensChanged();
    void markAsReadAfterDownloadChanged();
    void startPageChanged();
    void hideRecommendByGenresChanged();
    void hideWillWatchChanged();
    void showedVideoForNewcomersChanged();
    void autoSkipOpeningChanged();
    void hideSkipOpeningChanged();
    void fixedControlPanelChanged();
    void hidedQualityChanged();
    void hidedSpeedChanged();
    void playerBufferChanged();
    void usingVideoProxyChanged();
    void torrentStreamPathChanged();
    void removeAllDownloadedTorrentChanged();

};

#endif // USERCONFIGURATIONVIEWMODEL_H
