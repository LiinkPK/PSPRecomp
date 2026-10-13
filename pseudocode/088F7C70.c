/* Entry 0x088F7C70 | file offset 0x000F4C48 | FUN_088f7c70 | bytes 100 */

bool FUN_088f7c70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_088f7d0c();
  if (iVar1 == 1) {
    FUN_088f5188(param_1 + param_2 * 0x1270 + 0x14c80);
  }
  return iVar1 == 1;
}

