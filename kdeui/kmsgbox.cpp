/*                                                    cd source
 * $Id$
 *
 * $Log$
 * Kalle: Copyright headers
 * kdoctoolbar removed
 *
 * Revision 1.5  1997/09/10 12:07:48  kdecvs
 * Kalle: fixed large meomry leak (bug reported by Joerg Habenicht)
 *
 * Revision 1.4  1997/09/10 09:04:17  kdecvs
 * Coolo: Torben's wish is my command ;)
 *
 * Revision 1.3  1997/09/04 22:36:26  kdecvs
 * Coolo: put the icons in share/icons, I hope, this is right ;)
 *
 * Revision 1.2  1997/05/08 22:53:20  kalle
 * Kalle:
 * KPixmap gone for good
 * Eliminated static objects from KApplication and HTML-Widget
 *
 * Revision 1.1.1.1  1997/04/13 14:42:42  cvsuser
 * Source imported
 *
 * Revision 1.1.1.1  1997/04/09 00:28:09  cvsuser
 * Sources imported
 *
 * Revision 1.1  1997/03/15 22:41:21  kalle
 * Initial revision
 *
 * Revision 1.3.2.1  1997/01/10 19:48:32  alex
 * public release 0.1
 *
 * Revision 1.3  1997/01/10 19:44:33  alex
 * imported
KMsgBox::KMsgBox(QWidget *parent, const char *caption, const char *message, int type,
                 const char *b1text, const char *b2text, const char *b3text,
                 const char *b4text) : QDialog (parent, caption, TRUE, 0)

				 QDialog (parent, caption, TRUE, 0),
				 msg(0L), picture(0L),
				 b1(0L), b2(0L), b3(0L), b4(0L),
				 f1(0L)
#include <kbuttonbox.h>

    
		char* pKDEDIR = getenv( "KDEDIR" );
		QString ipath;
		if( pKDEDIR )
			ipath = pKDEDIR;
		else
			ipath = "/usr/local";
		ipath += "/share/";
#include "kmsgbox.moc"

    if(!icons_initialized) {
	const char *message, int type,
	const char *b1text, const char *b2text,
        icons[0].load(ifile);
        icons[1].load(ipath + "exclamation.xpm");
        icons[2].load(ipath + "stopsign.xpm");
        icons[3].load(ipath + "question.xpm");
	f1( 0L )
{
    int icon;
    static int icons_initialized = 0;
    if(icon_index <= 4)
    if( !icons_initialized ) {
    	QString ipath = kapp->kdedir() + "/share/apps/kde/pics/";
        QString ifile = ipath + "info.xpm";
    initMe(caption, message, b1text, b2text, b3text, b4text, icons[icon]);
        b2 = bbox->addButton( b2text );
    /*
     * check, if we have a default button, if not, set the left button to default
     */
    
    if(!(type & 0x000000f0)) {
        
    }
	// Check, if we have a default button
    if(b1)
        b1->setDefault(type & DB_FIRST);
    if(b2)
        b2->setDefault(type & DB_SECOND);
    if(b3)
        b3->setDefault(type & DB_THIRD);
    if(b4)
        b4->setDefault(type & DB_FOURTH);
    
    resize(w + 20, h);

	
	setFixedWidth( 
void KMsgBox::initMe(const char *caption, const char *message,
                     const char *b1text, const char *b2text, const char *b3text, const char *b4text,
                    const QPixmap & icon)
	setFixedHeight(
    setCaption(caption);
    
    nr_buttons = 0;
	
	// and new styling.

    if(b1text) {
        b1 = new QPushButton(b1text, this, "_b1");
        b1->resize(80, 25);
        connect(b1, SIGNAL(clicked()), this, SLOT(b1Pressed()));
	QBoxLayout *buttons = new QHBoxLayout();
	topLayout->addLayout( buttons );
	
    if(b2text) {
        b2 = new QPushButton(b2text, this, "_b2");
        b2->resize(80, 25);
        connect(b2, SIGNAL(clicked()), this, SLOT(b2Pressed()));
		if( b1->sizeHint().width() > widget_width )
			widget_width =  b1->sizeHint().width();
        nr_buttons++;
    if(b3text) {
        b3 = new QPushButton(b3text, this, "_b3");
        b3->resize(80, 25);
        connect(b3, SIGNAL(clicked()), this, SLOT(b3Pressed()));
		if( b2->sizeHint().width() > widget_width )
			widget_width =  b2->sizeHint().width();
        nr_buttons++;
    if(b4text) {
        b4 = new QPushButton(b4text, this, "_b4");
        b4->resize(80, 25);
        connect(b4, SIGNAL(clicked()), this, SLOT(b4Pressed()));
		if( b3->sizeHint().width() > widget_width )
			widget_width =  b3->sizeHint().width();
        nr_buttons++;
    msg = new QLabel(message, this, "_msg");
    msg->setAlignment(AlignCenter);
    msg->adjustSize();
    picture = new QLabel(this, "_pict");
    picture->setAutoResize(TRUE);
    picture->setPixmap(icon);
    calcOptimalSize();
    setMinimumSize(w + 20, h);
    f1 = new QFrame(this);
    f1->setLineWidth(1);
KMsgBox::~KMsgBox() {}
	delete b3;
  if( b4 )
	delete b4;
{
	delete f1;
	delete picture;
	delete msg;
		delete b1;
     * align buttons
     */
    int interval = B_WIDTH + B_SPACING;
	if( b3 )
		delete b3;
	if( b4 )
		delete b4;
}

void KMsgBox::resizeEvent(QResizeEvent *)
{
	// Resize event is rendered obsolete by automatic geometry management
	 
    /*
	
	int interval = B_WIDTH + B_SPACING;
    
    calcOptimalSize();

    f1->setGeometry(0, height() - 45, width(), 2);
    
    picture->move(15, 10 + (h1 - picture->height()) / 2);
    msg->move(text_offset + ((width() - text_offset) - msg->width()) / 2, 10 + (h1 - msg->height()) / 2);
    int left_offset = (width() - ((nr_buttons * 80) + (nr_buttons - 1) * 10)) / 2;
    int hw = height() - 30;
    if(b1) {
        b1->move(left_offset, hw);

    if(b2) {
        b2->move(left_offset, hw);
        left_offset += interval;
    }
    if(b3) {
        b3->move(left_offset, hw);
        left_offset += interval;
    }

    if(b4)
        b4->move(left_offset, hw);
		
	*/
}

void KMsgBox::calcOptimalSize()
{
    int text_width = picture->width() + 10 + msg->width() + 30;  // label width + margins


    int button_width = (nr_buttons * 80) + 20 + (nr_buttons - 1) * B_SPACING;



    w = button_width > text_width ? button_width : text_width;
    
    h1 = msg->height() > picture->height() ? msg->height() : picture->height();

    h = h1 + 25 + 40;

    text_offset = 15 + picture->width() + 10;
}

void KMsgBox::b1Pressed() { done(1); }
void KMsgBox::b2Pressed() { done(2); }
void KMsgBox::b3Pressed() { done(3); }
void KMsgBox::b4Pressed() { done(4); }

/*
 * now, the common functions. They may be used for easy creation and usage of
 * some general message boxes
 */

int KMsgBox::message(QWidget *parent, const char *caption, const char *message, int type, const char *btext)

{
    KMsgBox *mb = new KMsgBox(parent, caption, message, type, btext);

    int retcode = mb->exec();
    delete mb;
    return retcode;
}


int KMsgBox::yesNo(QWidget *parent, const char *caption, const char *message, int type, const char *yes, const char *no)
{
    KMsgBox *mb = new KMsgBox(parent, caption, message, type, yes, no);

    int retcode = mb->exec();
    delete mb;
    return retcode;
}

int KMsgBox::yesNoCancel(QWidget *parent, const char *caption, const char *message, int type,
                        const char *yes, const char *no, const char *cancel)
{
    KMsgBox *mb = new KMsgBox(parent, caption, message, type, yes, no, cancel);

    int retcode = mb->exec();
    delete mb;
    return retcode;
}
