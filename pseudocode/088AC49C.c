/* Entry 0x088AC49C | file offset 0x000A9474 | FUN_088ac49c | bytes 280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_088ac49c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  
  FUN_088ab800(param_1,1);
  uVar1 = _DAT_08a49748;
  iVar3 = FUN_08867894();
  if (iVar3 == 0) {
    iVar3 = func_0x08a489d8(auStack_20,param_2);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) | 0x20;
      uVar2 = 1;
    }
    else {
      func_0x08a48808(auStack_20,param_1 + 0xf08,param_2,param_3,uVar1);
      *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xffffffdf;
      uVar2 = 0;
    }
  }
  else {
    iVar3 = func_0x08a48968(auStack_20,param_2);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) | 0x20;
      uVar2 = 1;
    }
    else {
      func_0x08a48698(auStack_20,param_1 + 0xf08,param_2,param_3,uVar1);
      *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xffffffdf;
      uVar2 = 0;
    }
  }
  return uVar2;
}

