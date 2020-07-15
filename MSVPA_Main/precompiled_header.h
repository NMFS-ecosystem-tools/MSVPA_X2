
#include "nmfDatabase.h"
#include "nmfLogger.h"
#include "nmfUtils.h"
#include "nmfStructsQt.h"

#include <string>
#include <set>
#include <map>
#include <memory>
#include <vector>
#include <functional>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cmath>
#include <cassert>
#include <complex>
#include <cstddef>
#include <cstdint>
#include <cstdlib>

#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCategoryAxis>
#include <QCheckBox>
#include <QColor>
#include <QComboBox>
#include <QDir>
#include <QFrame>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QListWidget>
#include <QMap>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPointer>
#include <QPushButton>
#include <QRadioButton>
#include <QSpacerItem>
#include <QSplitter>
#include <QStringList>
#include <QTabWidget>
#include <QTableWidget>
#include <QToolTip>
#include <QValidator>
#include <QValueAxis>
#include <QVariant>
#include <QVBoxLayout>
#include <QVector>

#include <QtDataVisualization/Q3DBars>
#include <QtDataVisualization/Q3DTheme>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QStackedBarSeries>

#include <QtDataVisualization/qbardataproxy.h>
#include <QtDataVisualization/qabstract3dseries.h>
#include <QtDataVisualization/qcategory3daxis.h>
#include <QtDataVisualization/qvalue3daxis.h>
#include <QtDataVisualization/qbardataproxy.h>
#include <QtDataVisualization/q3dscene.h>
#include <QtDataVisualization/q3dcamera.h>
#include <QtDataVisualization/qbar3dseries.h>
#include <QtDataVisualization/q3dtheme.h>

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <boost/algorithm/string/trim.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/range/algorithm_ext/erase.hpp>

using namespace QtDataVisualization;

