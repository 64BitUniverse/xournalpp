/*
 * Xournal++
 *
 * Declaration of all class types
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2 or later
 */

XOJ_DECLARE_TYPE(AutosaveJob, 1);
XOJ_DECLARE_TYPE(BlockingJob, 2);
XOJ_DECLARE_TYPE(ExportJob, 3);
XOJ_DECLARE_TYPE(ButtonConfig, 4);
XOJ_DECLARE_TYPE(Inertia, 5);
XOJ_DECLARE_TYPE(EditSelection, 6);
XOJ_DECLARE_TYPE(EraseHandler, 7);
XOJ_DECLARE_TYPE(ImageHandler, 8);
XOJ_DECLARE_TYPE(InputHandler, 9);
XOJ_DECLARE_TYPE(XMLAttribute, 10);
XOJ_DECLARE_TYPE(DoubleArrayAttribute, 11);
XOJ_DECLARE_TYPE(DoubleAttribute, 12);
XOJ_DECLARE_TYPE(ActionEnabledListener, 13);
XOJ_DECLARE_TYPE(ActionSelectionListener, 14);
XOJ_DECLARE_TYPE(ActionHandler, 15);
XOJ_DECLARE_TYPE(ClipboardHandler, 16);
XOJ_DECLARE_TYPE(Control, 17);
XOJ_DECLARE_TYPE(BaseExportJob, 18);
XOJ_DECLARE_TYPE(AboutDialog, 19);
XOJ_DECLARE_TYPE(ButtonConfigGui, 20);
XOJ_DECLARE_TYPE(ExportDialog, 21);
XOJ_DECLARE_TYPE(FormatDialog, 22);
XOJ_DECLARE_TYPE(ImagesDialog, 23);
XOJ_DECLARE_TYPE(AbstractItem, 24);
XOJ_DECLARE_TYPE(AbstractToolItem, 25);
XOJ_DECLARE_TYPE(ColorToolItem, 26);
XOJ_DECLARE_TYPE(FontButton, 27);
XOJ_DECLARE_TYPE(Cursor, 28);
XOJ_DECLARE_TYPE(GladeGui, 29);
XOJ_DECLARE_TYPE(GladeSearchpath, 30);
XOJ_DECLARE_TYPE(EraseableStroke, 31);
XOJ_DECLARE_TYPE(EraseableStrokePart, 32);
XOJ_DECLARE_TYPE(Document, 33);
XOJ_DECLARE_TYPE(DocumentHandler, 34);
XOJ_DECLARE_TYPE(DocumentListener, 35);
XOJ_DECLARE_TYPE(Element, 36);
XOJ_DECLARE_TYPE(Font, 37);
XOJ_DECLARE_TYPE(Image, 38);
XOJ_DECLARE_TYPE(ColorUndoAction, 39);
XOJ_DECLARE_TYPE(DeleteUndoAction, 40);
XOJ_DECLARE_TYPE(EraseUndoAction, 41);
XOJ_DECLARE_TYPE(FontUndoAction, 42);
XOJ_DECLARE_TYPE(InsertDeletePageUndoAction, 43);
XOJ_DECLARE_TYPE(ArrayIterator, 44);
XOJ_DECLARE_TYPE(DocumentView, 45);
XOJ_DECLARE_TYPE(XmlNode, 46);
XOJ_DECLARE_TYPE(XmlImageNode, 47);
XOJ_DECLARE_TYPE(XmlTextNode, 48);
XOJ_DECLARE_TYPE(PrintHandler, 49);
XOJ_DECLARE_TYPE(RecentManager, 50);
XOJ_DECLARE_TYPE(SaveHandler, 51);
XOJ_DECLARE_TYPE(ScrollHandler, 52);
XOJ_DECLARE_TYPE(PdfCacheEntry, 53);
XOJ_DECLARE_TYPE(PdfCache, 54);
XOJ_DECLARE_TYPE(LoadHandler, 55);
XOJ_DECLARE_TYPE(ParseException, 56);
XOJ_DECLARE_TYPE(SearchControl, 57);
XOJ_DECLARE_TYPE(SElement, 58);
XOJ_DECLARE_TYPE(Settings, 59);
XOJ_DECLARE_TYPE(__RefSElement, 60);
XOJ_DECLARE_TYPE(SAttribute, 61);
XOJ_DECLARE_TYPE(RecoSegment, 62);
XOJ_DECLARE_TYPE(ShapeRecognizer, 63);
XOJ_DECLARE_TYPE(ShapeRecognizerResult, 64);
XOJ_DECLARE_TYPE(Selection, 65);
XOJ_DECLARE_TYPE(RectSelection, 66);
XOJ_DECLARE_TYPE(RegionSelect, 67);
XOJ_DECLARE_TYPE(VerticalToolHandler, 68);
XOJ_DECLARE_TYPE(IntAttribute, 69);
XOJ_DECLARE_TYPE(TextAttribute, 70);
XOJ_DECLARE_TYPE(XmlPointNode, 71);
XOJ_DECLARE_TYPE(XmlStrokeNode, 72);
XOJ_DECLARE_TYPE(Tool, 73);
XOJ_DECLARE_TYPE(ZoomListener, 74);
XOJ_DECLARE_TYPE(ToolHandler, 75);
XOJ_DECLARE_TYPE(XournalMain, 76);
XOJ_DECLARE_TYPE(ZoomControl, 77);
XOJ_DECLARE_TYPE(Job, 78);
XOJ_DECLARE_TYPE(SaveJob, 79);
XOJ_DECLARE_TYPE(Scheduler, 80);
XOJ_DECLARE_TYPE(SynchronizedProgressListener, 81);
XOJ_DECLARE_TYPE(XournalScheduler, 82);
XOJ_DECLARE_TYPE(ImageView, 83);
XOJ_DECLARE_TYPE(ToolbarManageDialog, 84);
XOJ_DECLARE_TYPE(PdfPage, 85);
XOJ_DECLARE_TYPE(PdfPagesDialog, 86);
XOJ_DECLARE_TYPE(ColorEntry, 87);
XOJ_DECLARE_TYPE(SelectBackgroundColorDialog, 88);
XOJ_DECLARE_TYPE(SettingsDialog, 89);
XOJ_DECLARE_TYPE(PagePositionHandler, 90);
XOJ_DECLARE_TYPE(PagePositionCache, 91);
XOJ_DECLARE_TYPE(PagePosition, 92);
XOJ_DECLARE_TYPE(SidebarPreviewBaseEntry, 93);
XOJ_DECLARE_TYPE(Sidebar, 94);
XOJ_DECLARE_TYPE(ToolbarModel, 95);
XOJ_DECLARE_TYPE(ToolbarData, 96);
XOJ_DECLARE_TYPE(ToolZoomSlider, 97);
XOJ_DECLARE_TYPE(ToolSelectCombocontrol, 98);
XOJ_DECLARE_TYPE(ToolPageSpinner, 99);
XOJ_DECLARE_TYPE(ToolPageLayer, 100);
XOJ_DECLARE_TYPE(ToolMenuHandler, 101);
XOJ_DECLARE_TYPE(ToolButton, 102);
XOJ_DECLARE_TYPE(MenuItem, 103);
XOJ_DECLARE_TYPE(XournalView, 104);
XOJ_DECLARE_TYPE(SizeTAttribute, 105);
XOJ_DECLARE_TYPE(XojFont, 106);
XOJ_DECLARE_TYPE(InsertLayerUndoAction, 107);
XOJ_DECLARE_TYPE(PreviewJob, 108);
XOJ_DECLARE_TYPE(RenderJob, 109);
XOJ_DECLARE_TYPE(SearchBar, 110);
XOJ_DECLARE_TYPE(RepaintHandler, 111);
XOJ_DECLARE_TYPE(TextEditor, 112);
XOJ_DECLARE_TYPE(Layer, 113);
XOJ_DECLARE_TYPE(XojPage, 114);
XOJ_DECLARE_TYPE(LinkDestination, 115);
XOJ_DECLARE_TYPE(Rectangle, 116);
XOJ_DECLARE_TYPE(ScaleUndoAction, 117);
XOJ_DECLARE_TYPE(Point, 118);
XOJ_DECLARE_TYPE(Stroke, 119);
XOJ_DECLARE_TYPE(TextUndoAction, 120);
XOJ_DECLARE_TYPE(InsertUndoAction, 121);
XOJ_DECLARE_TYPE(SizeUndoAction, 122);
XOJ_DECLARE_TYPE(SizeUndoActionEntry, 123);
XOJ_DECLARE_TYPE(RefReplacement, 124);
XOJ_DECLARE_TYPE(UndoAction, 125);
XOJ_DECLARE_TYPE(Range, 126);
XOJ_DECLARE_TYPE(Text, 127);
XOJ_DECLARE_TYPE(_IntPopplerDocument, 128);
XOJ_DECLARE_TYPE(InputStreamException, 130);
XOJ_DECLARE_TYPE(_RefStrInternal, 131);
XOJ_DECLARE_TYPE(RemoveLayerUndoAction, 132);
XOJ_DECLARE_TYPE(RecognizerUndoAction, 133);
XOJ_DECLARE_TYPE(UndoRedoHandler, 134);
XOJ_DECLARE_TYPE(XojPageView, 135);
XOJ_DECLARE_TYPE(MainWindow, 136);
XOJ_DECLARE_TYPE(MetadataManager, 137);
XOJ_DECLARE_TYPE(MoveUndoAction, 138);
XOJ_DECLARE_TYPE(ObjectOutputStream, 139);
XOJ_DECLARE_TYPE(ObjectInputStream, 140);
XOJ_DECLARE_TYPE(PdfExport, 141);
XOJ_DECLARE_TYPE(GzOutputStream, 142);
XOJ_DECLARE_TYPE(PageBackgroundChangedUndoAction, 143);
XOJ_DECLARE_TYPE(PdfExportJob, 144);
XOJ_DECLARE_TYPE(BackgroundImage, 145);
XOJ_DECLARE_TYPE(PartList, 146);
XOJ_DECLARE_TYPE(PageRangeEntry, 147);
XOJ_DECLARE_TYPE(PageViewIndex, 148);
XOJ_DECLARE_TYPE(PageViewIndexEntry, 149);
XOJ_DECLARE_TYPE(EditSelectionContents, 150);
XOJ_DECLARE_TYPE(PageLayerPosEntry, 151);
XOJ_DECLARE_TYPE(BackgroundImageContents, 152);
XOJ_DECLARE_TYPE(PageRef, 153);
XOJ_DECLARE_TYPE(ToolbarCustomizeDialog, 154);
XOJ_DECLARE_TYPE(HexObjectEncoding, 155);
XOJ_DECLARE_TYPE(BinObjectEncoding, 156);
XOJ_DECLARE_TYPE(ObjectEncoding, 157);
XOJ_DECLARE_TYPE(ToolbarDragDropHandler, 158);
XOJ_DECLARE_TYPE(ToolbarDragDropHelper, 159);
XOJ_DECLARE_TYPE(SidebarIndexPage, 160);
XOJ_DECLARE_TYPE(ScrollbarXournalWidgetListener, 161);
XOJ_DECLARE_TYPE(Scrollbar, 162);
XOJ_DECLARE_TYPE(Layout, 163);
XOJ_DECLARE_TYPE(LayoutData, 164);
XOJ_DECLARE_TYPE(ToolbarAdapter, 165);
XOJ_DECLARE_TYPE(SpinPageAdapter, 166);
XOJ_DECLARE_TYPE(XojColor, 167);
XOJ_DECLARE_TYPE(ToolbarEntry, 168);
XOJ_DECLARE_TYPE(ToolbarItem, 169);
XOJ_DECLARE_TYPE(CustomizeableColorList, 170);
XOJ_DECLARE_TYPE(GotoDialog, 171);
XOJ_DECLARE_TYPE(ToolbarColorNames, 172);
XOJ_DECLARE_TYPE(SidebarLayout, 173);
XOJ_DECLARE_TYPE(SidebarToolbar, 174);
XOJ_DECLARE_TYPE(SidebarPreviewBase, 175);
XOJ_DECLARE_TYPE(AbstractSidebarPage, 176);
XOJ_DECLARE_TYPE(TextBoxUndoAction, 177);
XOJ_DECLARE_TYPE(LatexDialog, 178);
XOJ_DECLARE_TYPE(TexImage, 179);
XOJ_DECLARE_TYPE(XmlTexNode, 180);
XOJ_DECLARE_TYPE(AddUndoAction, 181);
XOJ_DECLARE_TYPE(CopyUndoAction, 182);
XOJ_DECLARE_TYPE(InsertsUndoAction, 183);
XOJ_DECLARE_TYPE(SwapUndoAction, 184);
XOJ_DECLARE_TYPE(PageHandler, 185);
XOJ_DECLARE_TYPE(PageListener, 186);
XOJ_DECLARE_TYPE(ToolDrawCombocontrol, 187);
XOJ_DECLARE_TYPE(DoubleArrayBuffer, 188);
XOJ_DECLARE_TYPE(SidebarPreviewPages, 189);
XOJ_DECLARE_TYPE(SidebarPreviewLayers, 190);
XOJ_DECLARE_TYPE(SidebarPreviewPageEntry, 191);
XOJ_DECLARE_TYPE(SidebarPreviewLayerEntry, 192);
XOJ_DECLARE_TYPE(GtkColorWrapper, 193);
XOJ_DECLARE_TYPE(RulerHandler, 194);
XOJ_DECLARE_TYPE(StrokeHandler, 195);
XOJ_DECLARE_TYPE(ArrowHandler, 196);
XOJ_DECLARE_TYPE(CircleHandler, 197);
XOJ_DECLARE_TYPE(RectangleHandler, 198);
XOJ_DECLARE_TYPE(BaseStrokeHandler, 199);
XOJ_DECLARE_TYPE(BackgroundSelectDialogBase, 200);
XOJ_DECLARE_TYPE(BaseElementView, 201);
XOJ_DECLARE_TYPE(ImageElementView, 202);
XOJ_DECLARE_TYPE(PdfElementView, 203);
XOJ_DECLARE_TYPE(MainWindowToolbarMenu, 204);
XOJ_DECLARE_TYPE(LastSelectedTool, 205);
XOJ_DECLARE_TYPE(RepaintWidgetHandler, 206);
XOJ_DECLARE_TYPE(PageTemplateDialog, 207);
XOJ_DECLARE_TYPE(PageTemplateSettings, 208);
XOJ_DECLARE_TYPE(XojOpenDlg, 209);
XOJ_DECLARE_TYPE(CustomExportJob, 210);
XOJ_DECLARE_TYPE(LatexController, 211);
XOJ_DECLARE_TYPE(AudioController, 212);
XOJ_DECLARE_TYPE(PageTypeHandler, 213);
XOJ_DECLARE_TYPE(PageTypeMenu, 214);
XOJ_DECLARE_TYPE(PageType, 215);
XOJ_DECLARE_TYPE(PageBackgroundChangeController, 216);
XOJ_DECLARE_TYPE(XojExportHandler, 217);
XOJ_DECLARE_TYPE(MainBackgroundPainter, 218);
XOJ_DECLARE_TYPE(LineBackgroundPainter, 219);
XOJ_DECLARE_TYPE(GraphBackgroundPainter, 220);
XOJ_DECLARE_TYPE(DottedBackgroundPainter, 221);
XOJ_DECLARE_TYPE(BaseBackgroundPainter, 222);
XOJ_DECLARE_TYPE(BackgroundConfig, 223);
XOJ_DECLARE_TYPE(RotateUndoAction, 224);
XOJ_DECLARE_TYPE(XojPdfPage, 225);
XOJ_DECLARE_TYPE(XojPdfBookmarkIterator, 226);
XOJ_DECLARE_TYPE(XojPdfDocument, 227);
XOJ_DECLARE_TYPE(XojPdfAction, 228);
XOJ_DECLARE_TYPE(XojPdfExport, 229);
XOJ_DECLARE_TYPE(XojPdfExportFactory, 230);
XOJ_DECLARE_TYPE(XojPdfDocumentInterface, 231);
XOJ_DECLARE_TYPE(PopplerGlibDocument, 232);
XOJ_DECLARE_TYPE(PopplerGlibPage, 233);
XOJ_DECLARE_TYPE(PopplerGlibPageBookmarkIterator, 234);
XOJ_DECLARE_TYPE(PopplerGlibAction, 235);
XOJ_DECLARE_TYPE(XojCairoPdfExport, 236);
XOJ_DECLARE_TYPE(AbstractInputDevice, 237);
XOJ_DECLARE_TYPE(NewGtkInputDevice, 238);
XOJ_DECLARE_TYPE(InputSequence, 239);
XOJ_DECLARE_TYPE(ZoomGesture, 240);
XOJ_DECLARE_TYPE(GroupUndoAction, 241);
XOJ_DECLARE_TYPE(FillTransparencyDialog, 242);
XOJ_DECLARE_TYPE(LayerController, 243);
XOJ_DECLARE_TYPE(PopupMenuButton, 244);
XOJ_DECLARE_TYPE(LayerCtrlListener, 245);
XOJ_DECLARE_TYPE(CoordinateSystemHandler, 246);
XOJ_DECLARE_TYPE(TouchHelper, 247);
XOJ_DECLARE_TYPE(TouchDisableInterface, 248);
XOJ_DECLARE_TYPE(TouchDisableCustom, 249);
XOJ_DECLARE_TYPE(TouchDisableX11, 250);




