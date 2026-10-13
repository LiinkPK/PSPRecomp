/* Entry 0x0894728C | file offset 0x00144264 | FUN_0894728c | bytes 252 */

void FUN_0894728c(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar1 = *(ushort *)(param_2 + 0x24);
  iVar5 = 0;
  iVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x38) + iVar6) + 4);
      iVar2 = FUN_089471a8(uVar7);
      iVar3 = *(int *)(param_1 + 0x9c);
      iVar4 = *(int *)(iVar3 + 0x24);
      if (iVar2 == 0) {
        uVar7 = (**(code **)(iVar4 + 0x34))
                          (iVar3 + *(short *)(iVar4 + 0x30),uVar7,
                           *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x38) + iVar6) + 0xc));
        iVar2 = *(int *)(*(int *)(param_2 + 0x38) + iVar6);
      }
      else {
        uVar7 = (**(code **)(iVar4 + 0x44))(iVar3 + *(short *)(iVar4 + 0x40),uVar7);
        iVar2 = *(int *)(*(int *)(param_2 + 0x38) + iVar6);
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar7;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < (int)(uint)uVar1);
  }
  return;
}

