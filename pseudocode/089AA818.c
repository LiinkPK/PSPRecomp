/* Entry 0x089AA818 | file offset 0x001A77F0 | FUN_089aa818 | bytes 752 */

undefined4 FUN_089aa818(undefined4 param_1)

{
  switch(param_1) {
  default:
    DAT_089daa50 = 0;
    return 0x800001fe;
  case 1:
    DAT_089daa58 = 0;
    FUN_089ab210(&DAT_089daa68,"ms0:/PICTURE",0x400);
    DAT_089daa50 = 1;
    DAT_089daa54 = 1;
    return 0;
  case 2:
    DAT_089daa58 = 0;
    FUN_089ab210(&DAT_089daa68,"ms0:/VIDEO",0x400);
    DAT_089daa50 = 2;
    DAT_089daa54 = 1;
    return 0;
  case 3:
    DAT_089daa58 = 0;
    FUN_089ab210(&DAT_089daa68,"ms0:/MUSIC",0x400);
    DAT_089daa50 = 4;
    DAT_089daa54 = 1;
    return 0;
  case 4:
    FUN_089ab210(&DAT_089daa58,"ms0:/PSP",0x10);
    FUN_089ab210(&DAT_089daa68,&DAT_089daa58,0x400);
    FUN_089ab2b4(&DAT_089daa68,"/SAVEDATA",0x400);
    DAT_089daa50 = 8;
    break;
  case 5:
    DAT_089daa58 = 0;
    FUN_089ab210(&DAT_089daa68,"ms0:/DCIM",0x400);
    DAT_089daa50 = 0x10;
    DAT_089daa54 = 1;
    return 0;
  case 6:
    FUN_089ab210(&DAT_089daa58,"ms0:/PSP",0x10);
    FUN_089ab210(&DAT_089daa68,&DAT_089daa58,0x400);
    FUN_089ab2b4(&DAT_089daa68,"/PHOTO",0x400);
    DAT_089daa50 = 0x20;
    break;
  case 7:
    FUN_089ab210(&DAT_089daa58,"ms0:/PSP",0x10);
    FUN_089ab210(&DAT_089daa68,&DAT_089daa58,0x400);
    FUN_089ab2b4(&DAT_089daa68,"/MUSIC",0x400);
    DAT_089daa50 = 0x40;
    break;
  case 8:
    FUN_089ab210(&DAT_089daa58,"ms0:/PSP",0x10);
    FUN_089ab210(&DAT_089daa68,&DAT_089daa58,0x400);
    FUN_089ab2b4(&DAT_089daa68,"/GAME",0x400);
    DAT_089daa50 = 0x80;
    break;
  case 9:
    DAT_089daa58 = 0;
    FUN_089ab210(&DAT_089daa68,"ms0:/MSSSJ",0x400);
    DAT_089daa50 = 0x200;
    DAT_089daa54 = 1;
    return 0;
  case 10:
    FUN_089ab210(&DAT_089daa58,"ms0:/PSP",0x10);
    FUN_089ab210(&DAT_089daa68,&DAT_089daa58,0x400);
    FUN_089ab2b4(&DAT_089daa68,"/COMMON",0x400);
    DAT_089daa50 = 0x100;
  }
  DAT_089daa54 = 2;
  return 0;
}

