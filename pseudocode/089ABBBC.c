/* Entry 0x089ABBBC | file offset 0x001A8B94 | FUN_089abbbc | bytes 228 */

short FUN_089abbbc(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  sVar4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    sVar4 = *(short *)((int)param_1 + 0xe) + -1;
    *(short *)((int)param_1 + 0xe) = sVar4;
    if (sVar4 == 0) {
      bVar1 = *(byte *)(param_1 + 3);
      iVar7 = param_1[1];
      iVar2 = (uint)bVar1 * 0x18;
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 8) = param_1[2];
      }
      iVar5 = param_1[2];
      if (iVar5 != 0) {
        *(int *)(iVar5 + 4) = iVar7;
      }
      if (param_1 == *(undefined4 **)(&DAT_089daef4 + iVar2)) {
        *(int *)(&DAT_089daef4 + iVar2) = iVar5;
      }
      if (param_1 == *(undefined4 **)(&DAT_089daef8 + iVar2)) {
        *(undefined4 *)(&DAT_089daef8 + iVar2) = 0;
      }
      uVar3 = DAT_09af717c;
      if ((&DAT_089daef2)[iVar2] != '\0') {
        uVar6 = *(undefined4 *)(&DAT_089daefc + iVar2);
        param_1[2] = DAT_09af7180;
        param_1[3] = uVar3;
        param_1[1] = uVar6;
        *(undefined4 **)(&DAT_089daefc + iVar2) = param_1;
        return 0;
      }
      (*(code *)(&PTR_FUN_089daeec)[(uint)bVar1 * 6])(*param_1);
    }
  }
  return sVar4;
}

