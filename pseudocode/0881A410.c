/* Entry 0x0881A410 | file offset 0x000173E8 | FUN_0881a410 | bytes 68 */

undefined4 FUN_0881a410(char *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0;
  }
  else if (param_2 < *(uint *)(param_1 + 4)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

