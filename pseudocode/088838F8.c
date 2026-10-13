/* Entry 0x088838F8 | file offset 0x000808D0 | FUN_088838f8 | bytes 160 */

/* WARNING: Removing unreachable block (ram,0x0888394c) */
/* WARNING: Removing unreachable block (ram,0x0888395c) */
/* WARNING: Removing unreachable block (ram,0x08883960) */
/* WARNING: Removing unreachable block (ram,0x08883964) */
/* WARNING: Removing unreachable block (ram,0x0888396c) */
/* WARNING: Removing unreachable block (ram,0x08883954) */
/* WARNING: Removing unreachable block (ram,0x08883970) */

void FUN_088838f8(void)

{
  undefined4 *puVar1;
  
  if ((DAT_089d69d4 == 0) && (DAT_089d69d4 = DAT_09b49128, DAT_09b49128 != 0)) {
    if ((DAT_09b49128 != 0) && (DAT_09b4912c != 0)) {
      if (DAT_09b49128 == DAT_09b4912c) {
        DAT_09b4912c = 0;
      }
      puVar1 = (undefined4 *)(DAT_09b49128 + 0x6c);
      DAT_09b49128 = *(int *)(DAT_09b49128 + 0x6c);
      *puVar1 = 0;
    }
    FUN_0888301c(DAT_089d69d4);
  }
  return;
}

