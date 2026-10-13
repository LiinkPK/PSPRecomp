/* Entry 0x088A1638 | file offset 0x0009E610 | FUN_088a1638 | bytes 64 */

undefined4 FUN_088a1638(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + param_2 + 0x68) == '\x01') {
    *(undefined1 *)(param_1 + param_2 + 0x68) = 0;
    uVar1 = FUN_089907f8(param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

