/* Entry 0x088F5484 | file offset 0x000F245C | FUN_088f5484 | bytes 88 */

bool FUN_088f5484(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_088f5508();
  if (iVar1 == 1) {
    FUN_088f5188(param_1 + param_2 * 0x10a8);
  }
  return iVar1 == 1;
}

