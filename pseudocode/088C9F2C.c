/* Entry 0x088C9F2C | file offset 0x000C6F04 | FUN_088c9f2c | bytes 188 */

undefined4 FUN_088c9f2c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_088ca240();
  if (iVar1 == 0) {
    FUN_088c9aec(param_1,param_2);
  }
  else {
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    FUN_089a34c0(iVar1,param_2);
    FUN_089a34c0(iVar1 + 0xc,param_2 + 0xc);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined2 *)(iVar1 + 0x1c) = *(undefined2 *)(param_2 + 0x1c);
    iVar2 = 0;
    *(undefined2 *)(iVar1 + 0x1e) = *(undefined2 *)(param_2 + 0x1e);
    *(undefined1 *)(iVar1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    iVar3 = param_2;
    do {
      iVar4 = iVar2 + iVar1;
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar4 + 0x21) = *(undefined1 *)(iVar3 + 0x21);
      iVar3 = iVar2 + param_2;
    } while (iVar2 < 3);
    *(undefined4 *)(iVar1 + 0x18) = uVar5;
  }
  return 1;
}

