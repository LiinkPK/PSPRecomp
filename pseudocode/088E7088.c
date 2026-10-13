/* Entry 0x088E7088 | file offset 0x000E4060 | FUN_088e7088 | bytes 212 */

void FUN_088e7088(int param_1)

{
  int iVar1;
  
  FUN_089a3868(param_1,&DAT_09af84c0);
  FUN_089a3868(param_1 + 0x10,&DAT_09af84c0);
  FUN_089a3868(param_1 + 0x20,&DAT_09af84c0);
  FUN_089a3868(param_1 + 0x30,&DAT_09af84c0);
  FUN_089a3868(param_1 + 0x40,&DAT_09af84c0);
  FUN_089a3868(param_1 + 0x50,&DAT_09af84c0);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined1 *)(param_1 + 0xff) = 0;
  iVar1 = 0;
  param_1 = param_1 + 0x70;
  do {
    FUN_088e715c(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar1 < 4);
  return;
}

