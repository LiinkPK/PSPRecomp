/* Entry 0x088632D4 | file offset 0x000602AC | FUN_088632d4 | bytes 56 */

void FUN_088632d4(int param_1)

{
  sceUmdUnRegisterUMDCallBack(*(undefined4 *)(param_1 + 0x158));
  sceKernelDeleteCallback(*(undefined4 *)(param_1 + 0x158));
  FUN_08863e40(param_1);
  return;
}

