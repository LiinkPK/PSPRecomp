/* Entry 0x088080C4 | file offset 0x0000509C | FUN_088080c4 | bytes 204 */

int FUN_088080c4(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_20;
  undefined1 local_1f [3];
  
  if ((*(uint *)(param_1 + 0x10) & 0x80) == 0) {
    iVar1 = FUN_08807d4c(param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_0880ad28(*(int *)(param_2 + 0x3ac) + 0x28,param_1,&local_20,local_1f);
      iVar1 = FUN_08807e6c(param_1,param_2,uVar2,param_3,local_1f[0]);
      if (local_20 == '\0') {
        *(uint *)(iVar1 + 0x28) = *(uint *)(iVar1 + 0x28) | 1;
      }
    }
  }
  else {
    iVar1 = 0;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  }
  return iVar1;
}

