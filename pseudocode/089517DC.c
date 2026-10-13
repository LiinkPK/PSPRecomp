/* Entry 0x089517DC | file offset 0x0014E7B4 | FUN_089517dc | bytes 132 */

void FUN_089517dc(undefined4 param_1,int param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = (uint)*param_3;
  uVar2 = uVar1;
  if (uVar1 < 10) {
    uVar2 = (int)(uVar1 * 4) >> 2;
    switch(uVar1) {
    case 0:
    case 3:
    case 6:
    case 9:
      uVar2 = 4;
    }
  }
  if ((*(short *)(*(int *)(param_2 + 0x88) + 0xe) == 0) &&
     (iVar3 = *(int *)(*(int *)(param_2 + 0x8c) + 0x3c), iVar3 != 0)) {
    FUN_08970568(iVar3,param_2,uVar2,param_3[1],0);
  }
  return;
}

