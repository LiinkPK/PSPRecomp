/* Entry 0x0881E7E0 | file offset 0x0001B7B8 | FUN_0881e7e0 | bytes 92 */

undefined4 FUN_0881e7e0(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 == 0) || (*(short *)(param_2 + 0x14) <= param_3)) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 * 4 + *(int *)(param_1 + 0x5c) + *(short *)(param_2 + 0x16) * 4)
    ;
  }
  return uVar1;
}

