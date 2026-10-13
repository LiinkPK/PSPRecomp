/* Entry 0x08970F2C | file offset 0x0016DF04 | FUN_08970f2c | bytes 228 */

undefined4 FUN_08970f2c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  uVar2 = param_4 + 3U & 0xfffc;
  *(uint *)(param_1 + 0x24) = uVar2;
  if (uVar2 < 0x8000) {
    if ((int)(uVar2 * 4) < param_3) {
      iVar3 = 0;
      iVar6 = 0;
      if (uVar2 != 0) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6) = 0;
          iVar6 = iVar6 + 4;
        } while (iVar3 < *(int *)(param_1 + 0x24));
      }
      *(undefined4 *)(param_1 + 4) = 0;
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x18) + uVar2 * 4);
      *(undefined4 **)(param_1 + 8) = puVar5;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x18) + param_3 + -0x10;
      *(undefined2 *)((int)puVar5 + 10) = 0xffff;
      *(undefined1 *)((int)puVar5 + 9) = 0;
      puVar5[1] = 0;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      *(undefined1 *)(puVar5 + 2) = 0;
      *puVar5 = uVar1;
      puVar5[3] = 0;
      puVar5 = *(undefined4 **)(param_1 + 0xc);
      uVar1 = 1;
      *(undefined2 *)((int)puVar5 + 10) = 0xffff;
      *(undefined1 *)((int)puVar5 + 9) = 0;
      uVar4 = *(undefined4 *)(param_1 + 8);
      *puVar5 = 0;
      puVar5[1] = uVar4;
      *(undefined1 *)(puVar5 + 2) = 1;
      puVar5[3] = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 0x14) = param_3;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

