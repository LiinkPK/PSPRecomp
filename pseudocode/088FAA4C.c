/* Entry 0x088FAA4C | file offset 0x000F7A24 | FUN_088faa4c | bytes 196 */

void FUN_088faa4c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined1 param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  short *psVar3;
  
  uVar2 = FUN_088fb934(param_2,param_3,0);
  psVar3 = (short *)FUN_088470b8(uVar2);
  if ((psVar3 != (short *)0x0) && (FUN_088fa9a8(param_1,(int)*psVar3,param_6), -1 < param_4)) {
    uVar1 = FUN_088fb934(param_4,param_5,1);
    (&DAT_09afc7de)[param_1 * 0x830] = uVar1;
    (&DAT_09afc8fa)[param_1 * 0x1060] = (char)param_4;
    (&DAT_09afc8fb)[param_1 * 0x1060] = (char)param_5;
  }
  return;
}

