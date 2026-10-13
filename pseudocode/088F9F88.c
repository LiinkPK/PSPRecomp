/* Entry 0x088F9F88 | file offset 0x000F6F60 | FUN_088f9f88 | bytes 404 */

void FUN_088f9f88(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 char param_6)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  iVar3 = FUN_088bbd8c(param_2);
  if (iVar3 != 0) {
    iVar1 = param_1 * 0x1060;
    puVar6 = &DAT_09afb8a0 + param_1 * 0x418;
    FUN_088f8d34(puVar6);
    FUN_088bbab4(puVar6,param_2,param_3,param_5);
    *(short *)(&DAT_09afc314 + iVar1) =
         (short)*(char *)((int)puVar6 + (char)(&DAT_09afc013)[iVar1] * 0xc6 + 0xca);
    (&DAT_09afc316)[iVar1] = 1;
    (&DAT_09afc317)[iVar1] = 1;
    (&DAT_09afc7d4)[param_1 * 0x830] = (ushort)(param_6 != '\x01');
    uVar5 = (ushort)param_4;
    *(ushort *)(&DAT_09afc7d6 + iVar1) = (ushort)*(byte *)(iVar3 + 7);
    if (param_4 < 0) {
      uVar5 = (ushort)*(byte *)(iVar3 + 8);
    }
    *(ushort *)(&DAT_09afc7d8 + iVar1) = uVar5;
    (&DAT_09afc7dc)[param_1 * 0x830] = (short)param_2;
    uVar2 = FUN_088fb934(*(undefined1 *)(iVar3 + 2),*(undefined1 *)(iVar3 + 3),0);
    (&DAT_09afc7da)[param_1 * 0x830] = uVar2;
    (&DAT_09afc8f8)[iVar1] = *(undefined1 *)(iVar3 + 2);
    (&DAT_09afc8f9)[iVar1] = *(undefined1 *)(iVar3 + 3);
    bVar4 = *(byte *)(iVar3 + 0x23);
    uVar7 = 0xffffffff;
    if ((bVar4 & 0x3f) != 0) {
      uVar7 = bVar4 & 0x3f;
    }
    uVar2 = FUN_088fb934(uVar7,(int)(bVar4 & 0xc0) >> 6,1);
    (&DAT_09afc7de)[param_1 * 0x830] = uVar2;
    bVar4 = 0xff;
    if ((*(byte *)(iVar3 + 0x23) & 0x3f) != 0) {
      bVar4 = *(byte *)(iVar3 + 0x23) & 0x3f;
    }
    (&DAT_09afc8fa)[iVar1] = bVar4;
    (&DAT_09afc8fb)[iVar1] = (char)((int)(*(byte *)(iVar3 + 0x23) & 0xc0) >> 6);
  }
  return;
}

