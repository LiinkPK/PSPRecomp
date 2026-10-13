/* Entry 0x0881E898 | file offset 0x0001B870 | FUN_0881e898 | bytes 92 */

undefined4 FUN_0881e898(char *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 == 0) || (*(short *)(param_2 + 0x1c) <= param_3)) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 * 4 + *(int *)(param_1 + 0x74) + *(short *)(param_2 + 0x1e) * 4)
    ;
  }
  return uVar1;
}

