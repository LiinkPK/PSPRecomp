/* Entry 0x088939EC | file offset 0x000909C4 | FUN_088939ec | bytes 44 */

bool FUN_088939ec(int param_1,int param_2)

{
  return (*(uint *)(*(int *)(*(int *)(param_1 + 0x74) + 0x108) + param_2 * 0xc + 8) & 0x40000) != 0;
}

