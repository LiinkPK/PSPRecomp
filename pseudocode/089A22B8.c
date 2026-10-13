/* Entry 0x089A22B8 | file offset 0x0019F290 | FUN_089a22b8 | bytes 88 */

int FUN_089a22b8(void)

{
  int iVar1;
  
  if (((DAT_09af67f4 != 0) || (*(int *)(DAT_09af6830 + 0x10) != 0)) ||
     (iVar1 = sceGeListUpdateStallAddr(DAT_09af6800,*(undefined4 *)(DAT_09af6830 + 8)), -1 < iVar1))
  {
    iVar1 = 0;
  }
  return iVar1;
}

