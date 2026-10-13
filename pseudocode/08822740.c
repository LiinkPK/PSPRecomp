/* Entry 0x08822740 | file offset 0x0001F718 | FUN_08822740 | bytes 144 */

undefined4 FUN_08822740(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == 0) {
      uVar2 = *(uint *)(param_1 + 0x20);
    }
    else {
      FUN_08822e30(param_1,param_2);
      FUN_08823264(param_1);
      uVar2 = *(uint *)(param_1 + 0x20);
    }
    *(uint *)(param_1 + 0x20) = uVar2 | 2;
    *(uint *)(param_1 + 0x20) = uVar2 & 0xfffffffb | 2;
    *(uint *)(param_1 + 0x20) = uVar2 & 0xfffffff3 | 2;
    *(uint *)(param_1 + 0x20) = uVar2 & 0xffffffe3 | 2;
    uVar1 = 0;
  }
  return uVar1;
}

