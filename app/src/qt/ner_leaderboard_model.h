/*
 ner_leaderboard_model.h     MindForger thinking notebook

 Copyright (C) 2016-2018 Martin Dvorak <martin.dvorak@mindforger.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef M8RUI_NER_LEADERBOARD_MODEL_H
#define M8RUI_NER_LEADERBOARD_MODEL_H

#include <QtWidgets>

namespace m8r {

class NerLeaderboardModel : public QStandardItemModel
{
    Q_OBJECT

public:
    explicit NerLeaderboardModel(QWidget* parent);
    NerLeaderboardModel(const NerLeaderboardModel&) = delete;
    NerLeaderboardModel(const NerLeaderboardModel&&) = delete;
    NerLeaderboardModel &operator=(const NerLeaderboardModel&) = delete;
    NerLeaderboardModel &operator=(const NerLeaderboardModel&&) = delete;
    ~NerLeaderboardModel();

    void removeAllRows();
    void addRow(std::string& entityName, std::string& entityType, float score);
};

}
#endif // M8RUI_NER_LEADERBOARD_MODEL_H