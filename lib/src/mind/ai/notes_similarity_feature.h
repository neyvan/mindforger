/*
 notes_similarity_feature.h     MindForger thinking notebook

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
#ifndef M8R_NOTES_SIMILARITY_FEATURE_H
#define M8R_NOTES_SIMILARITY_FEATURE_H

namespace m8r {

class NotesSimilarityFeature
{
public:
    explicit NotesSimilarityFeature();
    NotesSimilarityFeature(const NotesSimilarityFeature&) = delete;
    NotesSimilarityFeature(const NotesSimilarityFeature&&) = delete;
    NotesSimilarityFeature &operator=(const NotesSimilarityFeature&) = delete;
    NotesSimilarityFeature &operator=(const NotesSimilarityFeature&&) = delete;
    ~NotesSimilarityFeature();
};

}
#endif // M8R_NOTES_SIMILARITY_FEATURE_H