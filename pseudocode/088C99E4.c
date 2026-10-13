/* Entry 0x088C99E4 | file offset 0x000C69BC | FUN_088c99e4 | bytes 112 */

bool FUN_088c99e4(int param_1)

{
  bool bVar1;
  
  bVar1 = (*(uint *)(param_1 + 0xbde8) & 2) == 0;
  if (!bVar1) {
    *(uint *)(param_1 + 0xbde8) = *(uint *)(param_1 + 0xbde8) & 0xfffffffd;
    FUN_088ff894();
    FUN_088ff84c();
  }
  *(undefined4 *)(param_1 + 0xbdb8) = 6;
  return bVar1;
}

