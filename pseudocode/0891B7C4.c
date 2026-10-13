/* Entry 0x0891B7C4 | file offset 0x0011879C | FUN_0891b7c4 | bytes 252 */

int FUN_0891b7c4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  *(undefined4 *)(param_1 + 0x2a48) = 0;
  *(undefined4 *)(param_1 + 0x2a4c) = 0;
  iVar2 = 0;
  puVar1 = (undefined1 *)(param_1 + 0x2a04);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0xff;
    iVar3 = 0;
    puVar4 = puVar1;
    do {
      iVar3 = iVar3 + 1;
      puVar4[3] = 0;
      puVar4 = puVar1 + iVar3;
    } while (iVar3 < 5);
    iVar3 = 0;
    puVar4 = puVar1;
    do {
      iVar3 = iVar3 + 1;
      puVar4[8] = 0;
      puVar4 = puVar1 + iVar3;
    } while (iVar3 < 5);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0xd;
  } while (iVar2 < 2);
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
  FUN_0891a290(param_1);
  FUN_0891a3e4(param_1 + 0x27e0);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x2a78) = 0;
    *(undefined1 *)(param_1 + iVar3 + 0x2a84) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 3);
  return param_1;
}

