/* Entry 0x08905648 | file offset 0x00102620 | FUN_08905648 | bytes 84 */

undefined4 FUN_08905648(int *param_1)

{
  int iVar1;
  
  if (*param_1 != -1) {
    iVar1 = sceNetAdhocPdpDelete(*param_1,0);
    *param_1 = -1;
    if (iVar1 < 0) {
      return 0;
    }
  }
  return 1;
}

