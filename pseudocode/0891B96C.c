/* Entry 0x0891B96C | file offset 0x00118944 | FUN_0891b96c | bytes 264 */

void FUN_0891b96c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar1 = 0;
  puVar2 = (undefined1 *)(param_1 + 0x2a04);
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0xff;
    iVar3 = 0;
    puVar4 = puVar2;
    do {
      iVar3 = iVar3 + 1;
      puVar4[3] = 0;
      puVar4 = puVar2 + iVar3;
    } while (iVar3 < 5);
    iVar3 = 0;
    puVar4 = puVar2;
    do {
      iVar3 = iVar3 + 1;
      puVar4[8] = 0;
      puVar4 = puVar2 + iVar3;
    } while (iVar3 < 5);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0xd;
  } while (iVar1 < 2);
  *(undefined1 *)(param_1 + 0x2a1e) = 0;
  *(undefined1 *)(param_1 + 0x2a1f) = 0;
  *(undefined1 *)(param_1 + 0x2a20) = 0xff;
  *(undefined1 *)(param_1 + 0x2a21) = 0xff;
  *(undefined4 *)(param_1 + 0x2a24) = 0;
  *(undefined4 *)(param_1 + 0x2a28) = 0;
  *(undefined4 *)(param_1 + 0x2a2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a34) = 0;
  *(undefined4 *)(param_1 + 0x2a38) = 0;
  *(undefined2 *)(param_1 + 0x2a3c) = 0xffff;
  *(undefined2 *)(param_1 + 0x2a3e) = 0;
  *(undefined2 *)(param_1 + 0x2a40) = 0xffff;
  *(undefined2 *)(param_1 + 0x2a42) = 0;
  *(undefined4 *)(param_1 + 0x2a44) = 0;
  FUN_0891bf10(param_1);
  *(undefined4 *)(param_1 + 0x2a48) = param_2;
  *(undefined4 *)(param_1 + 0x2a4c) = param_3;
  iVar3 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x2a78) = 0;
    *(undefined1 *)(param_1 + iVar3 + 0x2a84) = 0;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 3);
  return;
}

