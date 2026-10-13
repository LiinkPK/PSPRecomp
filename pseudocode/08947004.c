/* Entry 0x08947004 | file offset 0x00143FDC | FUN_08947004 | bytes 252 */

void FUN_08947004(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar1 = *(ushort *)(param_3 + 0x20);
  iVar5 = 0;
  iVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x30) + iVar6) + 4);
      iVar2 = FUN_089471a8(uVar7);
      iVar3 = *(int *)(param_1 + 0xa4);
      iVar4 = *(int *)(iVar3 + 0x24);
      if (iVar2 == 0) {
        uVar7 = (**(code **)(iVar4 + 0x34))
                          (iVar3 + *(short *)(iVar4 + 0x30),uVar7,
                           *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x30) + iVar6) + 0xc));
        iVar2 = *(int *)(*(int *)(param_3 + 0x30) + iVar6);
      }
      else {
        uVar7 = (**(code **)(iVar4 + 0x44))(iVar3 + *(short *)(iVar4 + 0x40),uVar7);
        iVar2 = *(int *)(*(int *)(param_3 + 0x30) + iVar6);
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar7;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < (int)(uint)uVar1);
  }
  return;
}

