/* Entry 0x088FA11C | file offset 0x000F70F4 | FUN_088fa11c | bytes 400 */

void FUN_088fa11c(int param_1,undefined4 param_2,uint param_3,undefined1 param_4,undefined4 param_5,
                 int param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  FUN_088f9f88(param_1,param_2,0xffffffff,0xffffffff,param_5,0);
  iVar2 = param_1 * 0x1060;
  if (-1 < param_6) {
    FUN_089029d4(DAT_089d712c + 0x3b7a4,iVar2 + 0x9afb8b0 + (char)(&DAT_09afc013)[iVar2] * 0xc6,
                 param_6,(int)*(char *)(&DAT_09afb8a0 + param_1 * 0x418));
  }
  (&DAT_09afc014)[iVar2] = (char)param_3;
  (&DAT_09afc316)[iVar2] = param_4;
  (&DAT_09afc7d4)[param_1 * 0x830] = 0;
  iVar4 = FUN_088bbd8c(param_2);
  if (iVar4 != 0) {
    if (DAT_089d5f20 == '\x01') {
      param_3 = (uint)*(byte *)(iVar4 + 3);
      (&DAT_09afc014)[iVar2] = *(byte *)(iVar4 + 3);
    }
    uVar3 = FUN_088fb934(*(undefined1 *)(iVar4 + 2),param_3,0);
    (&DAT_09afc7da)[param_1 * 0x830] = uVar3;
    uVar1 = *(undefined1 *)(iVar4 + 2);
    (&DAT_09afc8f9)[iVar2] = (char)param_3;
    (&DAT_09afc8f8)[iVar2] = uVar1;
    bVar5 = *(byte *)(iVar4 + 0x23);
    uVar6 = 0xffffffff;
    if ((bVar5 & 0x3f) != 0) {
      uVar6 = bVar5 & 0x3f;
    }
    uVar3 = FUN_088fb934(uVar6,(int)(bVar5 & 0xc0) >> 6,1);
    (&DAT_09afc7de)[param_1 * 0x830] = uVar3;
    bVar5 = 0xff;
    if ((*(byte *)(iVar4 + 0x23) & 0x3f) != 0) {
      bVar5 = *(byte *)(iVar4 + 0x23) & 0x3f;
    }
    (&DAT_09afc8fa)[iVar2] = bVar5;
    (&DAT_09afc8fb)[iVar2] = (char)((int)(*(byte *)(iVar4 + 0x23) & 0xc0) >> 6);
  }
  return;
}

