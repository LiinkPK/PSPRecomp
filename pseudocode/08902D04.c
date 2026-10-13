/* Entry 0x08902D04 | file offset 0x000FFCDC | FUN_08902d04 | bytes 84 */

void FUN_08902d04(int *param_1)

{
  if (*param_1 != -1) {
    sceNetAdhocctlDelHandler();
    *param_1 = -1;
  }
  sceNetAdhocctlTerm();
  sceNetAdhocTerm();
  return;
}

