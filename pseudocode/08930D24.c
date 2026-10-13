/* Entry 0x08930D24 | file offset 0x0012DCFC | FUN_08930d24 | bytes 84 */

void FUN_08930d24(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_088daa68(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_088d3cf0(0,param_1 + 0x34,&DAT_089cf1cc);
  *(undefined2 *)(*(int *)(param_1 + 0x34) + 0xe) = 0x14;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}

