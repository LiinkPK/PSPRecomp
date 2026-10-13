/* Entry 0x0894F938 | file offset 0x0014C910 | FUN_0894f938 | bytes 76 */

void FUN_0894f938(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (*(char *)(param_4 + 2) != '\0') {
    FUN_0894f990(param_1,param_2,param_3,param_4);
    *(undefined1 *)(param_4 + 2) = 0;
  }
  return;
}

