/* Entry 0x0881A2FC | file offset 0x000172D4 | FUN_0881a2fc | bytes 204 */

undefined4 FUN_0881a2fc(char *param_1,uint param_2,uint param_3,undefined1 param_4)

{
  undefined4 uVar1;
  uint *puVar2;
  
  param_3 = param_3 & 0xff;
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_2 < *(uint *)(param_1 + 4)) {
    puVar2 = (uint *)(*(int *)(param_1 + 8) + param_2 * 4);
    if (*puVar2 == param_3) {
      uVar1 = 0xfffffffd;
    }
    else {
      *puVar2 = param_3;
      FUN_0881a454(param_1,param_2,param_3,param_4);
      FUN_0881a594(param_1,param_2,param_3,param_4);
      FUN_0881ac8c(param_1,param_2,param_4);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

