#include <kapp.h>
#include "kbuttonbox.h"
#include <qlayout.h>
#include <qlabel.h>
#include <qdialog.h>

int main(int argc, char **argv) {
  KApplication a(argc, argv, "dummy");

  // example 1
  {
    QDialog *w = new QDialog(0, "A common dialog", TRUE);
    w->setCaption("Example 1");
    QVBoxLayout *tl = new QVBoxLayout(w, 5);
    QLabel *l = new QLabel("A very common dialog\n\n"\
			   "Ok and Cancel are left aligned, Help\n"\
			   "is right aligned. Try resizing\n"\
			   "the window!\n"
			   "Press OK or Cancel when done"
			   , w);
    l->setAlignment(AlignVCenter|AlignLeft|WordBreak);
    l->setMinimumSize(l->sizeHint());
    tl->addWidget(l,1);
    KButtonBox *bbox = new KButtonBox(w);
    QPushButton *b = bbox->addButton("Ok");
    b->setDefault(TRUE);
    w->connect(b, SIGNAL(clicked()),
	       w, SLOT(accept()));
    w->connect(bbox->addButton("Cancel"), SIGNAL(clicked()),
	       w, SLOT(accept()));
    
    bbox->addStretch(1);
    bbox->addButton("Help");
    bbox->layout();
    tl->addWidget(bbox,0);
    tl->activate();
    w->exec();
    delete w;
  }

  // example 2
  {    
    QDialog *w = new QDialog(0, "Right aligned buttons", TRUE);
    w->setCaption("Example 2");
    QVBoxLayout *tl = new QVBoxLayout(w, 5);
    QLabel *l = new QLabel("Another common dialog\n\n"\
			   "Ok and Cancel are right aligned\n"\
			   "Try resizing the window!", w);
    l->setAlignment(AlignVCenter|AlignLeft|WordBreak);
    l->setMinimumSize(l->sizeHint());
    tl->addWidget(l,1);
    KButtonBox *bbox = new KButtonBox(w);
    bbox->addStretch(1);
    QPushButton *b = bbox->addButton("Ok");
    b->setDefault(TRUE);
    w->connect(b, SIGNAL(clicked()),
	       w, SLOT(accept()));
    w->connect(bbox->addButton("Cancel"), SIGNAL(clicked()),
	       w, SLOT(accept()));
    bbox->layout();
    tl->addWidget(bbox,0);
    tl->activate();  
    w->exec();
    delete w;
  }  

  // example 3
  {    
    QDialog *w = new QDialog(0, "Middle aligned buttons", TRUE);
    w->setCaption("Example 3");
    QVBoxLayout *tl = new QVBoxLayout(w, 5);
    QLabel *l = new QLabel("Another common dialog\n\n"\
			   "Ok and Cancel are middle aligned\n"\
			   "Try resizing the window!", w);
    l->setAlignment(AlignVCenter|AlignLeft|WordBreak);
    l->setMinimumSize(l->sizeHint());
    tl->addWidget(l,1);
    KButtonBox *bbox = new KButtonBox(w);
    bbox->addStretch(1);
    QPushButton *b = bbox->addButton("Ok");
    b->setDefault(TRUE);
    w->connect(b, SIGNAL(clicked()),
	       w, SLOT(accept()));
    w->connect(bbox->addButton("Cancel"), SIGNAL(clicked()),
	       w, SLOT(accept()));
    bbox->addStretch(1);
    bbox->layout();
    tl->addWidget(bbox,0);
    tl->activate();  
    w->exec();
    delete w;
  }  

  // example 4
  {    
    QDialog *w = new QDialog(0, "Bad example", TRUE);
    w->setCaption("Example 4");
    QVBoxLayout *tl = new QVBoxLayout(w, 5);
    QLabel *l = new QLabel("A very bad example\n\n"\
			   "Sometimes it's a bad idea to take\n"
			   "the maximum width for all buttons\n"
			   "since it will look ugly -- "
			   "anyway, it works", w);
    l->setAlignment(AlignVCenter|AlignLeft|WordBreak);
    l->setMinimumSize(l->sizeHint());
    tl->addWidget(l,1);
    KButtonBox *bbox = new KButtonBox(w);
    bbox->addStretch(1);
    QPushButton *b = bbox->addButton("Ok");
    b->setDefault(TRUE);
    w->connect(b, SIGNAL(clicked()),
	       w, SLOT(accept()));
    w->connect(bbox->addButton("Cancel"), SIGNAL(clicked()),
	       w, SLOT(accept()));

    bbox->addButton("Push me and I give you a banana");
    bbox->addStretch(1);
    bbox->layout();
    tl->addWidget(bbox,0);
    tl->activate();  
    w->exec();
    delete w;
  }

  // example 5
  {    
    QDialog *w = new QDialog(0, "Bad example", TRUE);
    w->setCaption("Example 5");
    QVBoxLayout *tl = new QVBoxLayout(w, 5);
    QLabel *l = new QLabel("A better solution for the bad example\n\n"\
			   "Use \"addButton(\"Push me and I give"
			   "you a banana\", TRUE);\" to\n"
			   "prevent this strange effect as seen\n"
			   "the former example!"
			   ,w);
    l->setAlignment(AlignVCenter|AlignLeft|WordBreak);
    l->setMinimumSize(l->sizeHint());
    tl->addWidget(l,1);
    KButtonBox *bbox = new KButtonBox(w);
    bbox->addStretch(1);
    QPushButton *b = bbox->addButton("Ok");
    b->setDefault(TRUE);
    w->connect(b, SIGNAL(clicked()),
	       w, SLOT(accept()));
    w->connect(bbox->addButton("Cancel"), SIGNAL(clicked()),
	       w, SLOT(accept()));

    bbox->addButton("Push me and I give you a banana", TRUE);
    bbox->addStretch(1);
    bbox->layout();
    tl->addWidget(bbox,0);
    tl->activate();  
    w->exec();
    delete w;
  }

  // example 6
  {    
    QDialog *w = new QDialog(0, "Vertical", TRUE);
    w->setCaption("Example 6 (last)");
    QHBoxLayout *tl = new QHBoxLayout(w, 5);
    QLabel *l = new QLabel("Did I mention that it's possible\n"
			   "to make vertically aligned buttons\n"
			   "too?"
			   ,w);
    l->setAlignment(AlignVCenter|AlignLeft|WordBreak);
    l->setMinimumSize(l->sizeHint());
    tl->addWidget(l,1);
    KButtonBox *bbox = new KButtonBox(w, KButtonBox::VERTICAL);
    QPushButton *b = bbox->addButton("Ok");
    b->setDefault(TRUE);
    w->connect(b, SIGNAL(clicked()),
	       w, SLOT(accept()));
    w->connect(bbox->addButton("Cancel"), SIGNAL(clicked()),
	       w, SLOT(accept()));

    bbox->addStretch(1);
    bbox->layout();
    tl->addWidget(bbox,0);
    tl->activate();  
    w->exec();
    delete w;
  }

  return 0;
}