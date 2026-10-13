/* Entry 0x088CD9D4 | file offset 0x000CA9AC | FUN_088cd9d4 | bytes 40 */

undefined4 FUN_088cd9d4(char *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*param_1 == '\x01') && (param_1[0x28] == '\x01')) {
    uVar1 = 1;
  }
  return uVar1;
}

