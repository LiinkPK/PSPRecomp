/* Entry 0x088EADEC | file offset 0x000E7DC4 | FUN_088eadec | bytes 412 */

void FUN_088eadec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_110 [256];
  
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 < 5) {
    if (uVar3 == 1) {
      FUN_089359a4(auStack_110,*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) * 0x40);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      FUN_08935d58(auStack_110);
      uVar2 = FUN_08867984(auStack_110,1);
      FUN_089359a4(auStack_110,uVar2);
      DAT_089d5f1c = 1;
      FUN_08862c40(auStack_110,1);
      iVar1 = param_1 + *(int *)(param_1 + 0x74) * 8;
      FUN_088629dc(auStack_110,*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(param_1 + 0x70),
                   &LAB_088eb0b4,param_1,1);
      DAT_089d5f1c = 0;
      *(undefined1 *)(iVar1 + 0x30) = 0;
      *(undefined1 *)(iVar1 + 0x31) = 0;
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
    else if (uVar3 != 2) {
      if (uVar3 == 3) {
        *(undefined1 *)(param_1 + *(int *)(param_1 + 0x74) * 8 + 0x31) = 1;
        uVar2 = FUN_088eb054(param_1);
        *(undefined4 *)(param_1 + 0x74) = uVar2;
        *(undefined4 *)(param_1 + 0x20) = 4;
      }
      else if (uVar3 == 4) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      else if (((*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18) + -1) &&
               (iVar1 = FUN_089359e8(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c) * 0x40),
               iVar1 != 0)) && (*(char *)(param_1 + *(int *)(param_1 + 0x74) * 8 + 0x30) != '\0')) {
        *(undefined4 *)(param_1 + 0x20) = 1;
      }
    }
  }
  return;
}

