/* Entry 0x0881E8F4 | file offset 0x0001B8CC | FUN_0881e8f4 | bytes 92 */

undefined4 FUN_0881e8f4(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 == 0) || (*(short *)(param_2 + 0x20) <= param_3)) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 * 4 + *(int *)(param_1 + 0x80) + *(short *)(param_2 + 0x22) * 4)
    ;
  }
  return uVar1;
}

