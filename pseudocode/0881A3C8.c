/* Entry 0x0881A3C8 | file offset 0x000173A0 | FUN_0881a3c8 | bytes 72 */

undefined4 FUN_0881a3c8(char *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if (param_2 < *(uint *)(param_1 + 4)) {
    *(uint *)(*(int *)(param_1 + 8) + param_2 * 4) = param_3 & 0xff;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

