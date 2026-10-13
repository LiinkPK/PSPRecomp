/* Entry 0x089BAD14 | file offset 0x001B7CEC | FUN_089bad14 | bytes 228 */

short FUN_089bad14(undefined4 *param_1)

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
      if (param_1 == *(undefined4 **)(&DAT_089daf3c + iVar2)) {
        *(int *)(&DAT_089daf3c + iVar2) = iVar5;
      }
      if (param_1 == *(undefined4 **)(&DAT_089daf40 + iVar2)) {
        *(undefined4 *)(&DAT_089daf40 + iVar2) = 0;
      }
      uVar3 = DAT_09af71f4;
      if ((&DAT_089daf3a)[iVar2] != '\0') {
        uVar6 = *(undefined4 *)(&DAT_089daf44 + iVar2);
        param_1[2] = DAT_09af71f8;
        param_1[3] = uVar3;
        param_1[1] = uVar6;
        *(undefined4 **)(&DAT_089daf44 + iVar2) = param_1;
        return 0;
      }
      (*(code *)(&PTR_FUN_089daf34)[(uint)bVar1 * 6])(*param_1);
    }
  }
  return sVar4;
}

