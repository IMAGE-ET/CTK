#ifndef __ctkDICOMListenerWidget_h
#define __ctkDICOMListenerWidget_h

// Qt includes 
#include <QWidget>

// CTK includes
#include <ctkPimpl.h>

#include "CTKDICOMWidgetsExport.h"

class ctkDICOMListenerWidgetPrivate;

class CTK_DICOM_WIDGETS_EXPORT ctkDICOMListenerWidget : public QWidget
{
public:
  typedef QWidget Superclass;
  explicit ctkDICOMListenerWidget(QWidget* parent=0);
  virtual ~ctkDICOMListenerWidget();

private:
  CTK_DECLARE_PRIVATE(ctkDICOMListenerWidget);
};

#endif
