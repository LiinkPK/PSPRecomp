/* Entry 0x088AC6CC | file offset 0x000A96A4 | FUN_088ac6cc | bytes 148 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_088ac6cc(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_10 [4];
  
  if ((*param_2 == 10) && (param_2[1] == 0x3ecc8)) {
    func_0x08a488c0(auStack_10,param_1 + 0xf08,param_2,_DAT_08a49748);
    *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xffffffdf;
    uVar1 = 0;
  }
  else {
    *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) | 0x20;
    uVar1 = 1;
  }
  return uVar1;
}

