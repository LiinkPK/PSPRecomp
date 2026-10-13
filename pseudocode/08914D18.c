/* Entry 0x08914D18 | file offset 0x00111CF0 | FUN_08914d18 | bytes 132 */

void FUN_08914d18(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_089160f0();
  func_0x08b49c54(*(undefined4 *)(param_1 + 0x570));
  *(undefined4 *)(param_1 + 0x768) = param_2;
  *(undefined4 *)(param_1 + 0x76c) = param_3;
  FUN_08916f78(0,FUN_08917830);
  FUN_08914b64(param_1,5);
  iVar1 = FUN_08838074(*(undefined4 *)(param_1 + 0x6d0));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x7db) = 1;
  }
  return;
}

