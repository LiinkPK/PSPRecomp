/* Entry 0x088DB10C | file offset 0x000D80E4 | FUN_088db10c | bytes 272 */

void FUN_088db10c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_088de1a8();
    iVar1 = DAT_089d7830;
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x10);
      if (*(int *)(iVar2 + 0x10) == 0) {
        *(undefined4 *)(DAT_089d7830 + 0xebc8) = *(undefined4 *)(iVar2 + 0xc);
        uVar3 = *(undefined4 *)(iVar2 + 0x10);
        iVar5 = *(int *)(iVar2 + 0xc);
      }
      else {
        *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc) = *(undefined4 *)(iVar2 + 0xc);
        uVar3 = *(undefined4 *)(iVar2 + 0x10);
        iVar5 = *(int *)(iVar2 + 0xc);
      }
      if (iVar5 == 0) {
        *(undefined4 *)(iVar1 + 0xebcc) = uVar3;
      }
      else {
        *(undefined4 *)(iVar5 + 0x10) = uVar3;
      }
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(int *)(iVar1 + 0xebd0) = *(int *)(iVar1 + 0xebd0) + -1;
      iVar1 = DAT_089d7830;
      if (*(code **)(DAT_089d7830 + 0x1096c) == (code *)0x0) {
        if (**(int **)(DAT_089d7830 + 0x1095c) != 0) {
          for (piVar4 = (int *)(*(int **)(DAT_089d7830 + 0x1095c))[1]; *piVar4 != 0;
              piVar4 = (int *)piVar4[1]) {
          }
        }
        **(undefined4 **)(DAT_089d7830 + 0x10960) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(iVar1 + 0x10960) = *(undefined4 *)(*(int *)(iVar1 + 0x10960) + 4);
      }
      else {
        (**(code **)(DAT_089d7830 + 0x1096c))(*(undefined4 *)(param_1 + 0x10));
      }
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

