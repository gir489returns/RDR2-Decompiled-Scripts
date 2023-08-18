#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	struct<1719> Local_16 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1077936128, 1065353216, 4, 8, 50, 10, 200, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1053609165, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 500, 600, 800, 1500, 10, 1500, 1400, 1300, 1200, 1100, 200, 1048576000, 1065353216, 0 } ;
	var uLocal_1735 = 32;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 15;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 15;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 15;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 15;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 15;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 15;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 15;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 15;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 15;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 15;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 15;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 15;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 15;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 15;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 15;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 15;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 15;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 15;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 15;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 15;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 15;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 15;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 15;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 15;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 15;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 15;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 15;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 15;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 15;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 15;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 15;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 15;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iVar0 = 521;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(iVar0))
	{
		func_1(&Local_16, &(Local_16.f_529), &(Local_16.f_754), &(Local_16.f_1718));
	}
	func_2(&Local_16, -1);
	while (true)
	{
		if (func_3(&Local_16))
		{
			func_4(&Local_16, 4);
		}
		else
		{
			func_5(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
			if (func_6(&Local_16) > 0)
			{
				func_7();
				func_8(&(Local_16.f_529));
				func_9(&Local_16, &(Local_16.f_529));
				func_10(&(Local_16.f_529), &(Local_16.f_754));
				func_11(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
			}
		}
		switch (func_6(&Local_16))
		{
			case 0:
				func_12(&Local_16);
				break;
			case 1:
				func_13(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
				break;
			case 2:
				func_14(&Local_16, &(Local_16.f_529), &(Local_16.f_754));
				break;
			case 3:
				func_15(&Local_16);
				break;
			case 4:
				func_16(&Local_16, &(Local_16.f_529), &(Local_16.f_754), &(Local_16.f_1718));
				break;
		}
		func_17(&(Local_16.f_529), &(Local_16.f_754));
		func_18(&(Local_16.f_1718));
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	func_19(uParam0, uParam1, uParam2, 0);
	func_20(&(uParam0->f_19));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam2->f_1[iVar0] == 0)
		{
			func_21(uParam1, uParam2, iVar0, 1, 0);
		}
		else
		{
			func_21(uParam1, uParam2, iVar0, 0, 0);
		}
		iVar0++;
	}
	func_22(uParam1);
	func_23(uParam1);
	func_24(uParam1);
	func_25(uParam1);
	func_26(uParam3);
	func_27(uParam0);
	func_28(0);
	func_29(uParam0, 0);
	func_30();
	func_31(0);
	func_32();
	HUD::_0x160825DADF1B04B3();
	func_33();
}

void func_2(var uParam0, int iParam1)
{
	if (func_34(uParam0, 2))
	{
		return;
	}
	func_35(uParam0, 2);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_3(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_36();
		return true;
	}
	if (func_37(1, 1))
	{
		func_36();
		return true;
	}
	if (func_34(uParam0, 1) && !func_38(uParam0->f_24))
	{
		uParam0->f_46 = func_39(PLAYER::PLAYER_PED_ID(), uParam0->f_24, 0);
		if (uParam0->f_46 > 1097859072)
		{
			return true;
		}
	}
	return false;
}

void func_4(var uParam0, int iParam1)
{
	if (func_6(uParam0) != iParam1)
	{
		uParam0->f_10 = iParam1;
	}
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	if (func_34(uParam0, 1))
	{
		return;
	}
	func_35(uParam0, 1);
	func_30();
	func_28(1);
	func_29(uParam0, 1);
	func_40(&(uParam0->f_82), 1);
	func_41(uParam0);
	func_42(uParam1);
	func_43(uParam1, uParam2, -1);
	uParam0->f_27[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_27[1 /*3*/] = { -1046478848 /* Float: -20f */, 1101004800 /* Float: 20f */, 0f };
	uParam0->f_27[2 /*3*/] = { -1046478848 /* Float: -20f */, 1112014848 /* Float: 50f */, 0f };
	uParam0->f_27[3 /*3*/] = { 1101004800 /* Float: 20f */, 1112014848 /* Float: 50f */, 0f };
	uParam0->f_27[4 /*3*/] = { 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 0f };
	uParam0->f_24 = { Global_34 };
}

int func_6(var uParam0)
{
	return uParam0->f_10;
}

void func_7()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_44())
	{
		Global_1902818.f_35 = TASK::_GET_TASK_FISHING(PLAYER::PLAYER_PED_ID(), &(Global_1902818.f_5));
	}
	else
	{
		Global_1902818.f_5 = 1;
		Global_1902818.f_35 = 0;
	}
}

void func_8(var uParam0)
{
	uParam0->f_4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
	uParam0->f_7 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
}

void func_9(var uParam0, var uParam1)
{
	POPULATION::_0x8EC7CD701F872F87(2f, 512, 0, 0, -1, -1);
	POPULATION::_0x8EC7CD701F872F87(0.1f, 1024, 0, 0, -1, -1);
	if (func_6(uParam0) == 0)
	{
		return;
	}
	func_45(uParam0);
	if (func_46())
	{
		func_47(uParam0);
	}
	if (func_48(2))
	{
		func_49(0);
		func_50(2);
	}
	if (func_48(4))
	{
		func_49(1);
		func_50(4);
	}
	if (func_51(&(uParam0->f_79)))
	{
		if (func_52(&(uParam0->f_79)) < 500)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
		}
		else
		{
			func_53(&(uParam0->f_79));
		}
	}
	if (func_44())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_1902818.f_35 == 1 && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID(), 256) == 0)
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 134, true);
			}
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.5f);
		}
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		func_54();
		CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
		if (Global_1902818.f_35 == 1)
		{
			if (Global_1902818.f_5 > 1 && Global_1902818.f_5 != 12)
			{
				func_55(0);
			}
			if (Global_1902818.f_5 > 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
				PAD::DISABLE_CONTROL_ACTION(0, -1.076797E-08f, false);
			}
			if (Global_1902818.f_5 == 12)
			{
				PAD::DISABLE_CONTROL_ACTION(0, -4.640839E+09f, false);
			}
		}
		if ((Global_1902818.f_5 > 1 && Global_1902818.f_5 != 6) || func_56(uParam1, 4096))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
		}
		uParam0->f_24 = { Global_34 };
	}
}

void func_10(var uParam0, var uParam1)
{
	if (Global_1902818.f_35 == 1 && (((Global_1902818.f_5 == 4 || Global_1902818.f_5 == 6) || Global_1902818.f_5 == 7) || Global_1902818.f_5 == 10))
	{
		func_57(uParam0);
		func_58(uParam0);
		if (Global_1902818.f_5 == 7)
		{
			func_59(uParam0, uParam1);
		}
	}
	else
	{
		uParam0->f_12 = -943501440;
		uParam0->f_13 = -943501440;
		uParam0->f_14 = -943501440;
		uParam0->f_15 = -943501440;
		uParam0->f_16 = -943501440;
		uParam0->f_17 = -943501440;
	}
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[15];
	var uVar17[15];
	var uVar33[15];
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	bool bVar53;
	int iVar54;
	int iVar55;

	func_60(uParam0, uParam2);
	uParam2->f_797 = 0;
	uParam2->f_798 = 0;
	iVar54 = 0;
	iVar54 = 0;
	while (iVar54 < 30)
	{
		bVar53 = ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar54]);
		if (bVar53 == 0)
		{
			iVar0++;
			if (func_61(uParam2->f_247[iVar54]))
			{
				uVar33[uParam2->f_247[iVar54]]++;
				if (uParam2->f_340[iVar54] == 1)
				{
					uVar17[uParam2->f_247[iVar54]]++;
				}
				else
				{
					uVar1[uParam2->f_247[iVar54]]++;
				}
				if (func_62(uParam2->f_247[iVar54]))
				{
					iVar51++;
				}
				else
				{
					iVar52++;
				}
			}
			if (uParam2->f_1[iVar54] == 1)
			{
				iVar49++;
			}
			else
			{
				iVar50++;
			}
		}
		if ((uParam2->f_154[iVar54] >= 3 && uParam2->f_154[iVar54] < 10) && bVar53 == 1)
		{
			func_21(uParam1, uParam2, iVar54, 0, 0);
		}
		switch (uParam2->f_154[iVar54])
		{
			case 0:
				func_63(uParam2, iVar54);
				break;
			case 1:
				func_64(uParam0, uParam2, iVar54);
				break;
			case 2:
				func_65(uParam1, uParam2, iVar54);
				break;
			case 3:
				func_66(uParam1, uParam2, iVar54);
				break;
			case 4:
				func_67(uParam0, uParam1, uParam2, iVar54);
				break;
			case 5:
				func_68(uParam0, uParam1, uParam2, iVar54);
				break;
			case 6:
			case 7:
				func_69(uParam0, uParam1, uParam2, iVar54);
				break;
			case 8:
				func_70(uParam1, uParam2, iVar54);
				break;
			case 9:
				func_71(uParam2, iVar54);
				break;
			case 10:
				func_72(uParam1, uParam2, iVar54);
				break;
		}
		iVar54++;
	}
	uParam2->f_471 = iVar0;
	iVar55 = 0;
	iVar55 = 0;
	while (iVar55 < 15)
	{
		uParam2->f_472[iVar55] = uVar1[iVar55];
		uParam2->f_488[iVar55] = uVar17[iVar55];
		uParam2->f_504[iVar55] = uVar33[iVar55];
		iVar55++;
	}
	uParam2->f_520 = iVar49;
	uParam2->f_521 = iVar50;
	uParam2->f_522 = iVar51;
	uParam2->f_523 = iVar52;
	uParam2->f_799++;
	if (uParam2->f_799 >= 30)
	{
		uParam2->f_799 = 0;
	}
}

void func_12(var uParam0)
{
	if (!func_34(uParam0, 1))
	{
		return;
	}
	func_73();
	if (func_74(uParam0))
	{
		func_4(uParam0, 1);
	}
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	if (func_44())
	{
		func_19(uParam0, uParam1, uParam2, 1);
		func_4(uParam0, 2);
	}
}

void func_14(var uParam0, var uParam1, var uParam2)
{
	if (func_75(uParam0, uParam1, uParam2))
	{
		func_19(uParam0, uParam1, uParam2, 0);
		func_4(uParam0, 3);
	}
	else
	{
		func_76(uParam0, uParam1, uParam2);
	}
}

void func_15(var uParam0)
{
	func_4(uParam0, 1);
}

void func_16(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_1(uParam0, uParam1, uParam2, uParam3);
}

void func_17(var uParam0, var uParam1)
{
	int iVar0;

	if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && func_44()) && Global_1902818.f_35 == 1)
	{
		iVar0 = func_77(uParam0);
		if (func_78(uParam1, iVar0))
		{
			Global_1902818.f_5.f_7 = 0;
			Global_1902818.f_5.f_8 = func_79(uParam0, uParam1);
			Global_1902818.f_5.f_9 = 0f;
			Global_1902818.f_5.f_18 = uParam1->f_309[iVar0];
			if (uParam0->f_163 == 0)
			{
				Global_1902818.f_5.f_19 = uParam1->f_962;
			}
			else
			{
				Global_1902818.f_5.f_19 = uParam1->f_963;
			}
			Global_1902818.f_5.f_17 = 0f;
			Global_1902818.f_5.f_13 = 0f;
			Global_1902818.f_5.f_20 = 0f;
			Global_1902818.f_5.f_21 = 0f;
		}
		else if (func_80(uParam1, iVar0))
		{
			Global_1902818.f_5.f_7 = uParam1->f_123[iVar0];
			Global_1902818.f_5.f_8 = func_79(uParam0, uParam1);
			Global_1902818.f_5.f_9 = uParam0->f_202;
			Global_1902818.f_5.f_18 = uParam1->f_309[iVar0];
			if (func_81(uParam1, iVar0))
			{
				Global_1902818.f_5.f_17 = 1f;
			}
			else
			{
				Global_1902818.f_5.f_17 = 0f;
			}
			Global_1902818.f_5.f_13 = func_82(uParam0);
			Global_1902818.f_5.f_20 = func_83(uParam0);
			Global_1902818.f_5.f_21 = func_84(uParam0);
		}
		else
		{
			Global_1902818.f_5.f_7 = 0;
			Global_1902818.f_5.f_8 = 0f;
			Global_1902818.f_5.f_9 = 0f;
			Global_1902818.f_5.f_17 = 0f;
			Global_1902818.f_5.f_13 = 0f;
			Global_1902818.f_5.f_20 = 0f;
			Global_1902818.f_5.f_21 = 0f;
		}
		TASK::_SET_TASK_FISHING(PLAYER::PLAYER_PED_ID(), &(Global_1902818.f_5));
	}
}

void func_18(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (((!MISC::IS_BIT_SET(*iParam0, iVar0) && func_85(iVar1, 1, 1)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iVar1))) && func_86(PLAYER::GET_PLAYER_PED(iVar1)))
			{
				MISC::SET_BIT(iParam0, iVar0);
			}
			if (MISC::IS_BIT_SET(*iParam0, iVar0))
			{
				if (func_85(iVar1, 1, 1) && func_86(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					func_87(&(iParam0->f_1[iVar0 /*47*/]), PLAYER::GET_PLAYER_PED(iVar1), iVar0);
				}
				else
				{
					MISC::CLEAR_BIT(iParam0, iVar0);
					func_88(&(iParam0->f_1[iVar0 /*47*/]), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_19(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1)
	{
		func_89(13);
		func_90();
		func_91();
		func_92();
		func_93(&(uParam0->f_12));
		func_93(&(uParam0->f_15));
		if (MAP::IS_WAYPOINT_ACTIVE())
		{
			MAP::SET_WAYPOINT_OFF();
		}
		func_25(uParam1);
		func_94(1);
		func_95(1);
		func_96(uParam1, 1);
		func_97(uParam0);
		func_98();
		func_99(uParam0, 1);
		func_100(uParam0, uParam1);
		func_101();
		func_32();
		func_103(func_102());
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 174, true);
		VEHICLE::SET_RANDOM_TRAINS(false);
		uParam0->f_528 = TASK::_0x5952DFA38FA529FE();
	}
	else
	{
		func_104(0);
		func_105();
		func_106(0, 0);
		if (!func_107(uParam0->f_82[55]))
		{
			func_108();
		}
		func_40(&(uParam0->f_82), 1);
		func_47(uParam0);
		func_20(&(uParam0->f_19));
		func_109(uParam0, 0);
		func_99(uParam0, 0);
		func_95(0);
		func_110(uParam1);
		func_111(uParam0, uParam1, uParam2, 0, 0);
		func_25(uParam1);
		func_94(0);
		uParam0->f_24 = { Global_34 };
		uParam0->f_18 = 0;
		func_112(uParam0);
		func_113(uParam0);
		WATER::_0xA33F5069B0CB89B8();
		func_114(uParam1, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 174, false);
		VEHICLE::SET_RANDOM_TRAINS(true);
	}
}

void func_20(var uParam0)
{
	if (uParam0->f_2 == 0)
	{
		return;
	}
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(-2.279722E-08f);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_3));
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_4);
}

void func_21(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam1->f_123[iParam2]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_123[iParam2], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_123[iParam2], true, true);
		}
		PED::SET_PED_RESET_FLAG(uParam1->f_123[iParam2], 169, false);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_123[iParam2], false);
		PED::SET_PED_CONFIG_FLAG(uParam1->f_123[iParam2], 17, false);
		if (func_48(16))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam1->f_123[iParam2], 0, false);
		}
	}
	DECORATOR::DECOR_REMOVE(uParam1->f_123[iParam2], "Fish_Prevent_Tasking");
	DECORATOR::DECOR_REMOVE(uParam1->f_123[iParam2], "Fish_Weight");
	iVar0 = func_115(uParam0, iParam2);
	if (iVar0 != -1)
	{
		func_43(uParam0, uParam1, -1);
	}
	if (uParam1->f_371[iParam2] == 1)
	{
		iParam3 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_123[iParam2]))
	{
		if (iParam3 == 1 && iParam4 == 1)
		{
			func_116(&(uParam1->f_123[iParam2]));
		}
		else
		{
			func_117(&(uParam1->f_123[iParam2]), 1, 1, 1);
		}
	}
	if (uParam1->f_216[iParam2] != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_216[iParam2]);
	}
	func_118(uParam1, iParam2);
}

void func_22(var uParam0)
{
	if (!AUDIO::_HAS_SOUND_ID_FINISHED(uParam0->f_69))
	{
		AUDIO::_STOP_SOUND_WITH_ID(uParam0->f_69);
	}
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!AUDIO::_HAS_SOUND_ID_FINISHED(uParam0->f_62[iVar0]))
		{
			AUDIO::_STOP_SOUND_WITH_ID(uParam0->f_62[iVar0]);
		}
		iVar0++;
	}
}

void func_24(var uParam0)
{
	if (!AUDIO::_HAS_SOUND_ID_FINISHED(uParam0->f_68))
	{
		AUDIO::_STOP_SOUND_WITH_ID(uParam0->f_68);
	}
}

void func_25(var uParam0)
{
	func_119(&(uParam0->f_8));
	uParam0->f_8 = 0;
}

void func_26(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_88(&(uParam0->f_1[iVar0 /*47*/]), iVar0);
		iVar0++;
	}
}

void func_27(var uParam0)
{
	HUD::_TEXT_BLOCK_DELETE("MGFSH");
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::_RELEASE_SOUNDSET(*uParam0);
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		POPULATION::_0x247F86595D396344(2.288155E+15f);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(0.0001053037f, 1.106478E-27f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(0.0001053037f, -6.245116E-06f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(0.0001053037f, -1.871559E-19f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(0.0001053037f, -1.790311E-22f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(6.626133E-12f, -4.169182E-16f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(6.626133E-12f, 6.748897E-33f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(6.626133E-12f, -8.406152E-24f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(6.626133E-12f, -4.832357E-24f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(14.53056f, 5.212843E-17f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(14.53056f, -2.455164E-07f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(14.53056f, 4.160828E-32f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-0.36017f, -0.36017f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-4.590726E-15f, -4.590726E-15f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1.531581E+12f, 1.531581E+12f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-6.01922E+29f, -6.01922E+29f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(1.747917E-31f, 1.747917E-31f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-6.707116E-15f, -6.707116E-15f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-2.90935E-24f, -2.90935E-24f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-6.907537E-28f, -6.907537E-28f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(4.83018E-16f, 4.83018E-16f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-2.138887E-29f, -5.71153E-18f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-2.138887E-29f, 6.969995E+23f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(-2.138887E-29f, 0.06050969f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(7.235244E-10f, -5.71153E-18f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(7.235244E-10f, 6.969995E+23f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(7.235244E-10f, 0.06050969f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(3.864684E-13f, -5.71153E-18f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(3.864684E-13f, -1.154441E-11f, 3);
		POPULATION::SET_SPAWNER_INFO_PRIORITY(3.864684E-13f, 91.73095f, 3);
	}
	else
	{
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(0.0001053037f, 1.106478E-27f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(0.0001053037f, -6.245116E-06f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(0.0001053037f, -1.871559E-19f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(0.0001053037f, -1.790311E-22f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(6.626133E-12f, -4.169182E-16f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(6.626133E-12f, 6.748897E-33f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(6.626133E-12f, -8.406152E-24f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(6.626133E-12f, -4.832357E-24f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(14.53056f, 5.212843E-17f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(14.53056f, -2.455164E-07f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(14.53056f, 4.160828E-32f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-0.36017f, -0.36017f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-4.590726E-15f, -4.590726E-15f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1.531581E+12f, 1.531581E+12f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-6.01922E+29f, -6.01922E+29f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(1.747917E-31f, 1.747917E-31f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-6.707116E-15f, -6.707116E-15f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-2.90935E-24f, -2.90935E-24f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-6.907537E-28f, -6.907537E-28f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(4.83018E-16f, 4.83018E-16f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-2.138887E-29f, -5.71153E-18f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-2.138887E-29f, 6.969995E+23f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(-2.138887E-29f, 0.06050969f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(7.235244E-10f, -5.71153E-18f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(7.235244E-10f, 6.969995E+23f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(7.235244E-10f, 0.06050969f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(3.864684E-13f, -5.71153E-18f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(3.864684E-13f, -1.154441E-11f);
		POPULATION::CLEAR_SPAWNER_INFO_PRIORITY(3.864684E-13f, 91.73095f);
		POPULATION::_0x324AB2A68AD8AEE5();
	}
}

void func_29(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 31;
	if (iParam1 == 1)
	{
		if (!func_34(uParam0, 8))
		{
			NETWORK::RESERVE_NETWORK_CLIENT_MISSION_PEDS(iVar0);
			PED::_RESERVE_AMBIENT_PEDS(iVar0);
			func_35(uParam0, 8);
		}
	}
	else if (func_34(uParam0, 8))
	{
		PED::_UNRESERVE_AMBIENT_PEDS(iVar0);
		func_120(uParam0, 8);
	}
}

void func_30()
{
	func_50(1);
	Global_1902818.f_39 = 0;
	Global_1902818.f_41 = 0;
	Global_1902818.f_43 = 0;
	Global_1902818.f_36 = 0;
	Global_1902818.f_2 = 0;
	Global_1902818.f_5.f_6 = 0;
	Global_1902818.f_5.f_5 = 0;
}

void func_31(int iParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, -1.197024E-12f, 0, false))
	{
		return;
	}
	Global_1902818.f_4 = iParam0;
}

void func_32()
{
	func_121(4);
	func_50(2);
}

void func_33()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_34(var uParam0, int iParam1)
{
	return func_122(uParam0->f_11, iParam1);
}

void func_35(var uParam0, int iParam1)
{
	if (!func_34(uParam0, iParam1))
	{
		func_123(&(uParam0->f_11), iParam1);
	}
}

void func_36()
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -3.273909E-18f, false, 0, false, false);
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -3.273909E-18f, true, 0, false, false);
	}
}

bool func_37(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_13)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 5.152806E+32f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_38(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_39(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_40(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 73)
	{
		iVar0 = iVar1;
		if (iParam1 == 1 || !func_124(iVar0))
		{
			func_125(uParam0, iVar0);
		}
		iVar1++;
	}
}

void func_41(var uParam0)
{
	*uParam0 = "MGFSH_Sounds";
	uParam0->f_1 = "Minigame_Fishing_Scenes";
	uParam0->f_2 = "None";
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_4 = "Rod_Equipped";
	uParam0->f_5 = "Cast";
	uParam0->f_6 = "Reel_In";
	uParam0->f_7 = "Fish_On_Line";
	uParam0->f_8 = "Snap";
	uParam0->f_9 = "Caught";
}

void func_42(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_57[iVar0] = AUDIO::GET_SOUND_ID();
		uParam0->f_62[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	uParam0->f_67 = AUDIO::GET_SOUND_ID();
	uParam0->f_68 = AUDIO::GET_SOUND_ID();
	uParam0->f_69 = AUDIO::GET_SOUND_ID();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_70[iVar0] = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
}

void func_43(var uParam0, var uParam1, int iParam2)
{
	if (func_77(uParam0) != iParam2)
	{
		uParam0->f_2 = iParam2;
		if (func_126(iParam2) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
		{
			Global_1902818.f_37 = uParam1->f_247[iParam2];
			Global_1902818.f_38 = uParam1->f_278[iParam2];
		}
		else
		{
			Global_1902818.f_38 = 0f;
		}
	}
}

bool func_44()
{
	int iVar0;
	bool bVar1;

	bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == -1.197024E-12f);
}

void func_45(var uParam0)
{
	if (((func_127() != 0 || func_128() != 0) || func_129() != 0) || func_130() != 0)
	{
		func_93(&(uParam0->f_12));
	}
	if (func_131())
	{
		func_93(&(uParam0->f_15));
	}
}

bool func_46()
{
	return Global_1896762.f_352;
}

void func_47(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_132(uParam0, iVar0);
		iVar0++;
	}
}

bool func_48(int iParam0)
{
	return func_122(Global_1902818.f_1, iParam0);
}

void func_49(bool bParam0)
{
	if (func_48(8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1902818.f_47, bParam0);
	}
}

void func_50(int iParam0)
{
	if (func_48(iParam0))
	{
		func_133(&(Global_1902818.f_1), iParam0);
	}
}

bool func_51(var uParam0)
{
	return func_134(*uParam0, 1);
}

int func_52(var uParam0)
{
	if (!func_51(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1148846080));
	}
	if (func_135(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_136() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

void func_53(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_54()
{
	Global_1904398.f_8865 = 1;
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		func_137(4);
	}
	func_137(2);
	MISC::SET_BIT(&(Global_1958621.f_1), 0);
}

bool func_56(var uParam0, int iParam1)
{
	return func_122(uParam0->f_1, iParam1);
}

void func_57(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	bool bVar6;

	if (ENTITY::DOES_ENTITY_EXIST(func_138()))
	{
		vVar2 = { func_139() };
		iVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vVar2, 10f), 0, &fVar0);
		bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vVar2, 10f), &fVar1, false);
		if (iVar5 == 1 && bVar6 == 1)
		{
			uParam0->f_12 = (vVar2.z - fVar0);
			uParam0->f_13 = (fVar0 - fVar1);
		}
		else
		{
			uParam0->f_12 = -943501440;
			uParam0->f_13 = -943501440;
		}
	}
}

void func_58(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	bool bVar6;

	if (ENTITY::DOES_ENTITY_EXIST(func_141()))
	{
		vVar2 = { func_142() };
		iVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vVar2, 10f), 0, &fVar0);
		bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vVar2, 10f), &fVar1, false);
		if (iVar5 == 1 && bVar6 == 1)
		{
			uParam0->f_14 = (vVar2.z - fVar0);
			uParam0->f_15 = (fVar0 - fVar1);
		}
		else
		{
			uParam0->f_14 = -943501440;
			uParam0->f_15 = -943501440;
		}
	}
}

void func_59(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;

	iVar3 = func_77(uParam0);
	if (func_126(iVar3) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iVar3]))
	{
		vVar0 = { func_143(uParam1, iVar3) };
	}
	if (!func_38(vVar0))
	{
		iVar6 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vVar0, 10f), 0, &fVar4);
		bVar7 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vVar0, 10f), &fVar5, false);
		if (iVar6 == 1 && bVar7 == 1)
		{
			uParam0->f_16 = (vVar0.z - fVar4);
			uParam0->f_17 = (fVar4 - fVar5);
		}
		else
		{
			uParam0->f_16 = -943501440;
			uParam0->f_17 = -943501440;
		}
	}
}

void func_60(var uParam0, var uParam1)
{
	int iVar0;

	if (func_34(uParam0, 4))
	{
		return;
	}
	func_35(uParam0, 4);
	uParam1->f_470 = 1113128960; /* Float: 54.25f */
	func_144(&(uParam1->f_800));
	func_93(&(uParam1->f_436));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_118(uParam1, iVar0);
		iVar0++;
	}
}

bool func_61(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 14);
}

bool func_62(int iParam0)
{
	if (((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
	{
		return true;
	}
	return false;
}

void func_63(var uParam0, int iParam1)
{
	func_145(uParam0, iParam1, 2);
}

void func_64(var uParam0, var uParam1, int iParam2)
{
	if (func_146(uParam0, uParam1, iParam2))
	{
		func_145(uParam1, iParam2, 3);
	}
}

void func_65(var uParam0, var uParam1, int iParam2)
{
	if (func_147(uParam0, uParam1, iParam2))
	{
		func_145(uParam1, iParam2, 3);
	}
	else if (func_148(uParam1, iParam2) && func_149(uParam1))
	{
		func_93(&(uParam1->f_436));
		func_145(uParam1, iParam2, 1);
	}
}

void func_66(var uParam0, var uParam1, int iParam2)
{
	if (func_150(uParam1, iParam2))
	{
		func_151(uParam0, uParam1, iParam2);
	}
}

void func_67(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_148(uParam2, iParam3) || !func_152(uParam2, iParam3))
	{
		return;
	}
	if (func_153(uParam1, &(uParam2->f_123[iParam3])))
	{
		func_145(uParam2, iParam3, 10);
	}
	else if (func_154(uParam1, uParam2, iParam3))
	{
		func_155(uParam0, uParam1, uParam2, iParam3);
	}
	else if (((!func_156(uParam2->f_123[iParam3], 471.6342f) && !func_156(uParam2->f_123[iParam3], 2.40763E-20f)) && !func_156(uParam2->f_123[iParam3], -1.244518E+11f)) && !PED::IS_PED_FLEEING(uParam2->f_123[iParam3]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_123[iParam3], false);
		TASK::TASK_ANIMAL_UNALERTED(uParam2->f_123[iParam3], -1, 0, 0, 0);
	}
}

void func_68(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_115(uParam1, iParam3);
	if (iVar0 == -1)
	{
		func_155(uParam0, uParam1, uParam2, iParam3);
	}
	else if (iVar0 != -1 && !func_156(uParam2->f_123[iParam3], 672823.8f))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam2->f_123[iParam3]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam2->f_123[iParam3], false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_123[iParam3], true, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_123[iParam3], true);
		TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
		TASK::TASK_GO_TO_ENTITY(uParam2->f_123[iParam3], func_141(), -1, 0f, 2f, 0f, 0);
	}
}

void func_69(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(uParam2->f_123[iParam3], 64, true);
	uParam1->f_224++;
	iVar0 = func_115(uParam1, iParam3);
	if (iVar0 != -1 && Global_1902818.f_5 == 7)
	{
		func_157(uParam0, uParam1, uParam2, iParam3);
		func_158(uParam1, uParam2, iParam3);
		func_159(uParam0, uParam1, uParam2, iParam3);
		func_160(uParam0, uParam1, uParam2, iParam3);
	}
}

void func_70(var uParam0, var uParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
	{
		func_145(uParam1, iParam2, 10);
		return;
	}
	if ((uParam1->f_439[iParam2] == 0 && func_161(&(uParam1->f_524[iParam2 /*3*/])) >= 6f) || (uParam1->f_439[iParam2] == 1 && func_161(&(uParam1->f_524[iParam2 /*3*/])) >= 1101004800))
	{
		TASK::CLEAR_PED_TASKS(uParam1->f_123[iParam2], true, false);
		if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam1->f_123[iParam2]) || ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_123[iParam2], false))
		{
			DECORATOR::DECOR_SET_BOOL(uParam1->f_123[iParam2], "Fish_Prevent_Tasking", false);
		}
		func_151(uParam0, uParam1, iParam2);
	}
	else if (!func_51(&(uParam1->f_615[iParam2 /*3*/])) || func_52(&(uParam1->f_615[iParam2 /*3*/])) >= 250)
	{
		func_93(&(uParam1->f_615[iParam2 /*3*/]));
		if ((!func_156(uParam1->f_123[iParam2], 2.40763E-20f) && !func_156(uParam1->f_123[iParam2], -1.244518E+11f)) && !PED::IS_PED_FLEEING(uParam1->f_123[iParam2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_123[iParam2], true);
			TASK::CLEAR_PED_TASKS(uParam1->f_123[iParam2], true, false);
			if (uParam1->f_439[iParam2] == 1)
			{
				TASK::TASK_SMART_FLEE_COORD(uParam1->f_123[iParam2], uParam1->f_706[iParam2 /*3*/], 40f, 20000, 8, 3f);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(uParam1->f_123[iParam2], uParam1->f_706[iParam2 /*3*/], 10f, 6000, 8, 3f);
			}
		}
	}
}

void func_71(var uParam0, int iParam1)
{
	if (func_156(uParam0->f_123[iParam1], 672823.8f))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_123[iParam1], true, false);
	}
	PED::SET_PED_RESET_FLAG(uParam0->f_123[iParam1], 64, true);
}

void func_72(var uParam0, var uParam1, int iParam2)
{
	if (func_148(uParam1, iParam2))
	{
		func_21(uParam0, uParam1, iParam2, 1, 0);
	}
}

void func_73()
{
	HUD::TEXT_BLOCK_REQUEST("MGFSH");
	STREAMING::REQUEST_PTFX_ASSET();
}

bool func_74(var uParam0)
{
	if (!func_34(uParam0, 1))
	{
		return false;
	}
	if ((!MISC::IS_STRING_NULL_OR_EMPTY("MGFSH") && HUD::_DOES_TEXT_BLOCK_EXIST("MGFSH")) && !HUD::TEXT_BLOCK_IS_LOADED("MGFSH"))
	{
		return false;
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return false;
	}
	if (!AUDIO::PREPARE_SOUNDSET(*uParam0, true))
	{
		return false;
	}
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
	}
	return true;
}

bool func_75(var uParam0, var uParam1, var uParam2)
{
	if (!func_44())
	{
		func_162(uParam1, uParam2);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(func_163()))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
	{
		func_162(uParam1, uParam2);
		if (func_44())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -3.273909E-18f, false, 0, false, false);
		}
		return true;
	}
	if (Global_1902818.f_3 == 0)
	{
		if (func_44())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -3.273909E-18f, false, 0, false, false);
		}
		return true;
	}
	if (Global_1940072.f_25 == 1)
	{
		Global_1940072.f_25 = 0;
		func_93(&(uParam0->f_79));
		if (func_44())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -3.273909E-18f, false, 0, false, false);
		}
		return true;
	}
	return false;
}

void func_76(var uParam0, var uParam1, var uParam2)
{
	func_164(uParam1, uParam2);
	switch (Global_1902818.f_5)
	{
		case 0:
			func_165(uParam0);
			break;
		case 1:
			func_166(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_167(uParam0, uParam1, uParam2);
			break;
		case 3:
			func_168(uParam0);
			break;
		case 4:
			func_169(uParam0, uParam1);
			break;
		case 5:
			func_170();
			break;
		case 6:
			func_171(uParam0, uParam1, uParam2);
			break;
		case 7:
			func_172(uParam0, uParam1, uParam2);
			break;
		case 8:
			func_173(uParam0);
			break;
		case 9:
			func_174(uParam0, uParam1, uParam2);
			break;
		case 10:
			func_175(uParam0, uParam1, uParam2);
			break;
		case 11:
			func_176(uParam0, uParam1, uParam2);
			break;
		case 12:
			func_177(uParam0, uParam1, uParam2);
			break;
		case 13:
			func_178(uParam0);
			break;
	}
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	func_99(uParam0, 1);
	func_179(uParam0);
	if (PAD::IS_CONTROL_JUST_PRESSED(0, -1.076797E-08f))
	{
		func_180(32768, 1);
	}
	if (!func_181())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
	}
}

int func_77(var uParam0)
{
	if (uParam0->f_2 >= 30)
	{
	}
	return uParam0->f_2;
}

bool func_78(var uParam0, int iParam1)
{
	if (func_182(1))
	{
		return false;
	}
	if ((Global_1902818.f_5 == 6 && func_126(iParam1)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		return true;
	}
	return false;
}

float func_79(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if (!func_126(iVar0))
	{
		return 0f;
	}
	return (uParam1->f_278[iVar0] / uParam1->f_470);
}

bool func_80(var uParam0, int iParam1)
{
	if (((Global_1902818.f_5 == 7 || Global_1902818.f_5 == 12) && func_126(iParam1)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		return true;
	}
	return false;
}

bool func_81(var uParam0, int iParam1)
{
	return uParam0->f_154[iParam1] == 6;
}

float func_82(var uParam0)
{
	return func_183((BUILTIN::TO_FLOAT(uParam0->f_172) / 1128792064), 0f, 1f);
}

float func_83(var uParam0)
{
	return func_183((BUILTIN::TO_FLOAT(uParam0->f_173) / 1128792064), 0f, 1f);
}

float func_84(var uParam0)
{
	return func_183((BUILTIN::TO_FLOAT(uParam0->f_174) / 1128792064), 0f, 1f);
}

bool func_85(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_SESSION())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return false;
			}
			if (!Global_1051608.f_1[iVar0])
			{
				return false;
			}
		}
	}
	return true;
}

bool func_86(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, true);
	return (bVar1 == 1 && iVar0 == -1.197024E-12f);
}

void func_87(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_30 = TASK::_GET_TASK_FISHING(iParam1, uParam0);
	func_184(uParam0, iParam1);
	switch (*uParam0)
	{
		case 0:
			func_185(uParam0, iParam1, iParam2);
			break;
		case 1:
			func_186(uParam0, iParam1, iParam2);
			break;
		case 2:
			func_187(uParam0, iParam1, iParam2);
			break;
		case 3:
			func_188(uParam0, iParam1, iParam2);
			break;
		case 4:
			func_189(uParam0, iParam1, iParam2);
			break;
		case 5:
			func_190(uParam0, iParam1, iParam2);
			break;
		case 6:
			func_191(uParam0, iParam1, iParam2);
			break;
		case 7:
			func_192(uParam0, iParam1, iParam2);
			break;
		case 8:
			func_193(uParam0, iParam1, iParam2);
			break;
		case 9:
			func_194(uParam0, iParam1, iParam2);
			break;
		case 10:
			func_195(uParam0, iParam1, iParam2);
			break;
		case 11:
			func_196(uParam0, iParam1, iParam2);
			break;
		case 12:
			func_197(uParam0, iParam1, iParam2);
			break;
		case 13:
			func_198(uParam0, iParam1, iParam2);
			break;
	}
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_30 = 0;
	func_199(uParam0);
}

void func_89(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5) || Global_1900412.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_200() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_201(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = iVar0;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = iVar1;
	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
	{
		func_202(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}
	else if (Global_1900412.f_11 != -1)
	{
		func_202(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
	}
}

void func_90()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_203(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			DECORATOR::DECOR_SET_FLOAT(PLAYER::PLAYER_PED_ID(), sVar1, 0f);
		}
		iVar0++;
	}
}

void func_91()
{
	int iVar0;

	iVar0 = func_204();
	if (func_205(iVar0))
	{
		func_206(-1, -1, iVar0, 1, -1, 0);
	}
}

void func_92()
{
	Global_1902818.f_39 = 0;
	Global_1902818.f_41 = 0;
	Global_1902818.f_43 = 0;
	Global_1902818.f_36 = 0;
}

void func_93(var uParam0)
{
	func_207(uParam0, 0f);
}

void func_94(int iParam0)
{
	if (iParam0 == 1)
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 8192);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16384);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32768);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 262144);
	}
	else
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 8192);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16384);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32768);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 262144);
	}
}

void func_95(int iParam0)
{
	char* sVar0;

	if (!MISC::GET_MISSION_FLAG())
	{
		if (iParam0 == 1)
		{
			sVar0 = "MMFSH";
			MISC::_0x1096603B519C905F(sVar0);
		}
		else
		{
			MISC::_0x1096603B519C905F("");
		}
	}
}

void func_96(var uParam0, int iParam1)
{
	if (func_56(uParam0, iParam1))
	{
		func_133(&(uParam0->f_1), iParam1);
	}
}

void func_97(var uParam0)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, uParam0->f_4))
	{
		uParam0->f_3 = uParam0->f_4;
		AUDIO::_START_AUDIO_SCENESET(uParam0->f_3, uParam0->f_1);
	}
}

void func_98()
{
	if (!func_208(0) || func_209())
	{
		if ((((!func_210(0.6467319f, 1) || !func_210(2.089274E-21f, 1)) || !func_210(2.173288E+11f, 1)) || !func_210(9.248502E+28f, 1)) || !func_210(6.236711E+08f, 1))
		{
			func_211(1.761014E+35f, 1, 255, 0, 0);
		}
		func_212();
	}
}

void func_99(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_71 == 0)
		{
			uParam0->f_71 = 1;
			HUD::_ENABLE_HUD_CONTEXT(2.408079E-35f);
		}
	}
	else if (uParam0->f_71 == 1)
	{
		uParam0->f_71 = 0;
		HUD::_DISABLE_HUD_CONTEXT(2.408079E-35f);
	}
}

void func_100(var uParam0, var uParam1)
{
	if (func_213(Global_38.f_5811) && func_210(Global_38.f_5811, 1))
	{
		func_214(uParam0, uParam1, Global_38.f_5811, 0, 1);
	}
	else
	{
		func_214(uParam0, uParam1, 6.236711E+08f, 0, 1);
	}
}

void func_101()
{
	char* sVar0;
	char[] cVar1[8];
	float fVar2;

	if (func_48(8))
	{
		sVar0 = func_216(func_215(Global_38.f_5811), 4.808429E-35f);
		if (func_213(Global_38.f_5811))
		{
			StringIntConCat(&cVar1, func_217(Global_38.f_5811, 0, 0, 0), 8);
		}
		fVar2 = -7944.847f;
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1902818.f_48, sVar0);
		if (func_218(Global_38.f_5811))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1902818.f_49, "");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1902818.f_49, &cVar1);
		}
		if (func_219(Global_38.f_5811) || func_220(Global_38.f_5811))
		{
			fVar2 = 0.247476f;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1902818.f_50, fVar2);
	}
}

bool func_102()
{
	return true;
}

void func_103(bool bParam0)
{
	if (func_48(8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1902818.f_51, bParam0);
	}
}

void func_104(bool bParam0)
{
	int iVar0;

	if (Global_1900412.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_200() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13) && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_221(iVar0, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = iVar0;
		Global_1900412.f_8 = func_222();
		Global_1900412.f_9 = func_201(Global_1893611.f_2);
		Global_1900412.f_11 = func_223(Global_1896646.f_41);
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		{
			func_202(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
		else if (Global_1900412.f_11 != -1)
		{
			func_202(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		}
		else
		{
			func_202(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
	}
	Global_1900412.f_2 = 0;
}

void func_105()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		sVar1 = func_203(iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), sVar1);
		}
		iVar0++;
	}
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 <= 0 || iParam1 <= 0)
	{
		PAD::SET_CONTROL_SHAKE(0, 0, 0);
		PAD::SET_CONTROL_TRIGGER_SHAKE(0, 0, 0, 0, 0);
	}
	else
	{
		PAD::SET_CONTROL_SHAKE(0, iParam0, iParam1);
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam1) / 2f));
		PAD::SET_CONTROL_TRIGGER_SHAKE(0, 0, 0, iParam0, func_224(iVar0, 0, 255));
	}
}

bool func_107(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_225(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

void func_108()
{
	func_226(1);
}

void func_109(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (uParam0->f_72 == 0)
		{
			uParam0->f_72 = 1;
			HUD::_ENABLE_HUD_CONTEXT(-1.042483E+08f);
		}
	}
	else if (uParam0->f_72 == 1)
	{
		uParam0->f_72 = 0;
		HUD::_DISABLE_HUD_CONTEXT(-1.042483E+08f);
	}
}

void func_110(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_18))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0->f_18, false);
	}
}

void func_111(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iVar0], false);
		PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iVar0], 17, false);
		uParam2->f_706[iVar0 /*3*/] = { Global_34 };
		func_155(uParam0, uParam1, uParam2, iVar0);
		if (iParam4 == 1)
		{
			uParam2->f_402[iVar0] = uParam1->f_202;
		}
	}
	else
	{
		func_227(uParam0, uParam1);
		func_228(512);
	}
	func_22(uParam1);
	func_23(uParam1);
	if (iParam3 == 1)
	{
		func_229(uParam0, uParam1, uParam2, 2);
	}
	uParam1->f_167 = 0;
}

void func_112(var uParam0)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, uParam0->f_2))
	{
		uParam0->f_3 = uParam0->f_2;
		AUDIO::_STOP_AUDIO_SCENESET(uParam0->f_1);
	}
}

void func_113(var uParam0)
{
	if (!func_34(uParam0, 32))
	{
		return;
	}
	if (func_230("BOB_FISHING_STOP", 0, 1))
	{
		func_120(uParam0, 32);
	}
}

void func_114(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		func_231(uParam0, iVar1);
		if (iParam1 == 1)
		{
			func_232(uParam0, iVar1, 0);
		}
		else
		{
			func_232(uParam0, iVar1, 2);
		}
		func_53(&(uParam0->f_109[iVar0 /*3*/]));
		iVar0++;
	}
}

int func_115(var uParam0, int iParam1)
{
	if (func_77(uParam0) == iParam1)
	{
		return 0;
	}
	return -1;
}

void func_116(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

void func_117(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_118(var uParam0, int iParam1)
{
	func_145(uParam0, iParam1, 0);
	uParam0->f_216[iParam1] = 0;
	uParam0->f_247[iParam1] = 15;
	uParam0->f_278[iParam1] = 0f;
	uParam0->f_309[iParam1] = 0;
	uParam0->f_340[iParam1] = 0;
	uParam0->f_371[iParam1] = 0;
	uParam0->f_32[iParam1 /*3*/] = { 0f, 0f, 0f };
}

void func_119(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

void func_120(var uParam0, int iParam1)
{
	if (func_34(uParam0, iParam1))
	{
		func_133(&(uParam0->f_11), iParam1);
	}
}

void func_121(int iParam0)
{
	if (!func_48(iParam0))
	{
		func_123(&(Global_1902818.f_1), iParam0);
	}
}

bool func_122(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_123(var uParam0, int iParam1)
{
	func_233(uParam0, iParam1);
}

bool func_124(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((iParam0 == 59 || iParam0 == 60) || iParam0 == 61) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64) || iParam0 == 65) || iParam0 == 66) || iParam0 == 67) || iParam0 == 68) || iParam0 == 69) || iParam0 == 70) || iParam0 == 71) || iParam0 == 22) || iParam0 == 23) || iParam0 == 25) || iParam0 == 27) || iParam0 == 29) || iParam0 == 37) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32) || iParam0 == 33) || iParam0 == 34) || iParam0 == 41) || iParam0 == 42) || iParam0 == 43) || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 72) || iParam0 == 49) || iParam0 == 39) || iParam0 == 55) || iParam0 == 57) || iParam0 == 56)
	{
		return true;
	}
	return false;
}

void func_125(var uParam0, int iParam1)
{
	if ((*uParam0)[iParam1] != 0)
	{
		(*uParam0)[iParam1] = 0;
		uParam0->f_74[iParam1] = 0;
	}
}

bool func_126(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 30);
}

int func_127()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, 2.675111E+25f) * 1123942400));
}

int func_128()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, 4.604766E-33f) * 1123942400));
}

int func_129()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, 7.1436E+09f) * 1123942400));
}

int func_130()
{
	return BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(0, -9.812416E-26f) * 1123942400));
}

bool func_131()
{
	return Global_1902818.f_5.f_4 > 0f;
}

void func_132(var uParam0, int iParam1)
{
	if (iParam1 == 3)
	{
		if (HUD::_UI_PROMPT_IS_VALID(uParam0->f_70))
		{
			HUD::_UI_PROMPT_DELETE(uParam0->f_70);
		}
	}
	else if (func_234(uParam0->f_60[iParam1]))
	{
		func_235(&(uParam0->f_60[iParam1]), 0, 1);
	}
}

void func_133(var uParam0, int iParam1)
{
	func_236(uParam0, iParam1);
}

bool func_134(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_135(var uParam0)
{
	return func_134(*uParam0, 2);
}

int func_136()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_137(int iParam0)
{
	Global_1902883.f_302 = (Global_1902883.f_302 || iParam0);
}

int func_138()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1902818.f_5.f_11) && Global_1902818.f_35 == 1)
	{
		return Global_1902818.f_5.f_11;
	}
	return 0;
}

Vector3 func_139()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_138()))
	{
		return ENTITY::GET_ENTITY_COORDS(func_138(), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_140(vector3 vParam0, float fParam3)
{
	vector3 vVar0;

	vVar0 = { vParam0 };
	vVar0.f_2 = (vVar0.z + fParam3);
	return vVar0;
}

int func_141()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1902818.f_5.f_12) && Global_1902818.f_35 == 1)
	{
		return Global_1902818.f_5.f_12;
	}
	return 0;
}

Vector3 func_142()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_141()))
	{
		return ENTITY::GET_ENTITY_COORDS(func_141(), true, false);
	}
	return 0f, 0f, 0f;
}

Vector3 func_143(var uParam0, int iParam1)
{
	if (func_126(iParam1) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		return ENTITY::GET_ENTITY_COORDS(uParam0->f_123[iParam1], true, false);
	}
	return 0f, 0f, 0f;
}

void func_144(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		(*uParam0)[iVar0 /*10*/] = 1;
		(uParam0[iVar0 /*10*/])->f_1[0] = 1;
		iVar0++;
	}
	(*uParam0)[0 /*10*/] = 4;
	(uParam0[0 /*10*/])->f_1[0] = 0;
	(uParam0[0 /*10*/])->f_1[1] = 1;
	(uParam0[0 /*10*/])->f_1[2] = 0;
	(uParam0[0 /*10*/])->f_1[3] = 1;
	(*uParam0)[1 /*10*/] = 5;
	(uParam0[1 /*10*/])->f_1[0] = 0;
	(uParam0[1 /*10*/])->f_1[1] = 0;
	(uParam0[1 /*10*/])->f_1[2] = 0;
	(uParam0[1 /*10*/])->f_1[3] = 1;
	(uParam0[1 /*10*/])->f_1[4] = 1;
	(*uParam0)[2 /*10*/] = 4;
	(uParam0[2 /*10*/])->f_1[0] = 1;
	(uParam0[2 /*10*/])->f_1[1] = 0;
	(uParam0[2 /*10*/])->f_1[2] = 0;
	(uParam0[2 /*10*/])->f_1[3] = 1;
	(*uParam0)[3 /*10*/] = 6;
	(uParam0[3 /*10*/])->f_1[0] = 0;
	(uParam0[3 /*10*/])->f_1[1] = 0;
	(uParam0[3 /*10*/])->f_1[2] = 0;
	(uParam0[3 /*10*/])->f_1[3] = 1;
	(uParam0[3 /*10*/])->f_1[4] = 1;
	(uParam0[3 /*10*/])->f_1[5] = 1;
	(*uParam0)[4 /*10*/] = 8;
	(uParam0[4 /*10*/])->f_1[0] = 0;
	(uParam0[4 /*10*/])->f_1[1] = 0;
	(uParam0[4 /*10*/])->f_1[2] = 0;
	(uParam0[4 /*10*/])->f_1[3] = 0;
	(uParam0[4 /*10*/])->f_1[4] = 1;
	(uParam0[4 /*10*/])->f_1[5] = 1;
	(uParam0[4 /*10*/])->f_1[6] = 1;
	(uParam0[4 /*10*/])->f_1[7] = 1;
	(*uParam0)[5 /*10*/] = 4;
	(uParam0[5 /*10*/])->f_1[0] = 1;
	(uParam0[5 /*10*/])->f_1[1] = 1;
	(uParam0[5 /*10*/])->f_1[2] = 1;
	(uParam0[5 /*10*/])->f_1[3] = 0;
	(*uParam0)[6 /*10*/] = 8;
	(uParam0[6 /*10*/])->f_1[0] = 0;
	(uParam0[6 /*10*/])->f_1[1] = 0;
	(uParam0[6 /*10*/])->f_1[2] = 0;
	(uParam0[6 /*10*/])->f_1[3] = 0;
	(uParam0[6 /*10*/])->f_1[4] = 0;
	(uParam0[6 /*10*/])->f_1[5] = 0;
	(uParam0[6 /*10*/])->f_1[6] = 0;
	(uParam0[6 /*10*/])->f_1[7] = 1;
	(*uParam0)[7 /*10*/] = 8;
	(uParam0[7 /*10*/])->f_1[0] = 1;
	(uParam0[7 /*10*/])->f_1[1] = 0;
	(uParam0[7 /*10*/])->f_1[2] = 1;
	(uParam0[7 /*10*/])->f_1[3] = 1;
	(uParam0[7 /*10*/])->f_1[4] = 0;
	(uParam0[7 /*10*/])->f_1[5] = 1;
	(uParam0[7 /*10*/])->f_1[6] = 1;
	(uParam0[7 /*10*/])->f_1[7] = 1;
	(*uParam0)[8 /*10*/] = 7;
	(uParam0[8 /*10*/])->f_1[0] = 1;
	(uParam0[8 /*10*/])->f_1[1] = 1;
	(uParam0[8 /*10*/])->f_1[2] = 1;
	(uParam0[8 /*10*/])->f_1[3] = 1;
	(uParam0[8 /*10*/])->f_1[4] = 1;
	(uParam0[8 /*10*/])->f_1[5] = 1;
	(uParam0[8 /*10*/])->f_1[6] = 1;
	(*uParam0)[9 /*10*/] = 2;
	(uParam0[9 /*10*/])->f_1[0] = 0;
	(uParam0[9 /*10*/])->f_1[1] = 1;
	(*uParam0)[10 /*10*/] = 3;
	(uParam0[10 /*10*/])->f_1[0] = 0;
	(uParam0[10 /*10*/])->f_1[1] = 1;
	(uParam0[10 /*10*/])->f_1[2] = 1;
	(*uParam0)[11 /*10*/] = 4;
	(uParam0[11 /*10*/])->f_1[0] = 0;
	(uParam0[11 /*10*/])->f_1[1] = 1;
	(uParam0[11 /*10*/])->f_1[2] = 1;
	(uParam0[11 /*10*/])->f_1[3] = 1;
	(*uParam0)[12 /*10*/] = 4;
	(uParam0[12 /*10*/])->f_1[0] = 0;
	(uParam0[12 /*10*/])->f_1[1] = 0;
	(uParam0[12 /*10*/])->f_1[2] = 1;
	(uParam0[12 /*10*/])->f_1[3] = 1;
	(*uParam0)[13 /*10*/] = 3;
	(uParam0[13 /*10*/])->f_1[0] = 1;
	(uParam0[13 /*10*/])->f_1[1] = 0;
	(uParam0[13 /*10*/])->f_1[2] = 1;
	(*uParam0)[14 /*10*/] = 6;
	(uParam0[14 /*10*/])->f_1[0] = 0;
	(uParam0[14 /*10*/])->f_1[1] = 1;
	(uParam0[14 /*10*/])->f_1[2] = 1;
	(uParam0[14 /*10*/])->f_1[3] = 1;
	(uParam0[14 /*10*/])->f_1[4] = 1;
	(uParam0[14 /*10*/])->f_1[5] = 0;
}

void func_145(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_154[iParam1] != iParam2)
	{
		uParam0->f_154[iParam1] = iParam2;
		uParam0->f_185[iParam1] = iParam2;
	}
}

bool func_146(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]))
	{
		return true;
	}
	if (uParam1->f_216[iParam2] == 0)
	{
		func_237(uParam1, iParam2);
	}
	if (uParam1->f_216[iParam2] != 0 && func_38(uParam1->f_32[iParam2 /*3*/]))
	{
		if (func_38(uParam1->f_32[iParam2 /*3*/]))
		{
			vVar3 = { Global_34 };
			vVar0.x = (vVar3.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
			vVar0.f_1 = (vVar3.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f));
			vVar0.f_2 = vVar3.z;
			if (func_38(vVar0))
			{
				return false;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar0, false) < 1092616192)
			{
				return false;
			}
			else if (!func_238(uParam0, vVar0))
			{
				return false;
			}
			else if (func_239(vVar0))
			{
				return false;
			}
			else if (!func_240(vVar0, uParam1->f_216[iParam2], &(vVar0.f_2)))
			{
				return false;
			}
			else
			{
				uParam1->f_32[iParam2 /*3*/] = { vVar0 };
			}
		}
	}
	if ((uParam1->f_797 == 0 && uParam1->f_216[iParam2] != 0) && !func_38(uParam1->f_32[iParam2 /*3*/]))
	{
		STREAMING::REQUEST_MODEL(uParam1->f_216[iParam2], false);
		if (STREAMING::HAS_MODEL_LOADED(uParam1->f_216[iParam2]))
		{
			uParam1->f_123[iParam2] = func_241(uParam1->f_216[iParam2], uParam1->f_32[iParam2 /*3*/], 0f, 1, 1, 0, 1, 1, 1, 0, 0);
			uParam1->f_1[iParam2] = 0;
			FLOCK::_SET_ANIMAL_RARITY(uParam1->f_123[iParam2], 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_216[iParam2]);
			uParam1->f_797 = 1;
		}
	}
	return !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iParam2]);
}

bool func_147(var uParam0, var uParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	int iVar18;

	if (func_51(&(uParam1->f_433)) && func_52(&(uParam1->f_433)) < (200 + uParam1->f_471 * 20))
	{
		return false;
	}
	func_93(&(uParam1->f_433));
	iVar16 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1, 8);
	if (iVar16 == 0)
	{
		return false;
	}
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 < iVar16)
	{
		if (((!ENTITY::IS_ENTITY_DEAD(uVar0[iVar18]) && func_242(uVar0[iVar18])) && !func_243(uParam1, &(uVar0[iVar18]))) && !func_153(uParam0, &(uVar0[iVar18])))
		{
			uParam1->f_123[iParam2] = uVar0[iVar18];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_123[iParam2], true, false);
			uParam1->f_1[iParam2] = 1;
			iVar17 = PED::_GET_PED_META_OUTFIT_HASH(uParam1->f_123[iParam2]);
			if ((((iVar17 == 7.25654E+13f || iVar17 == NaNf) || iVar17 == 2.169477E+15f) || iVar17 == -1.195466E-37f) || iVar17 == 3.092953E+31f)
			{
				uParam1->f_340[iParam2] = 1;
			}
			else
			{
				uParam1->f_340[iParam2] = 0;
			}
			func_93(&(uParam1->f_436));
			return true;
		}
		iVar18++;
	}
	return false;
}

bool func_148(var uParam0, int iParam1)
{
	return iParam1 == uParam0->f_799;
}

bool func_149(var uParam0)
{
	if (((uParam0->f_471 < 5 && func_244(&(uParam0->f_436)) > 15000) && !func_48(64)) && Global_1902818.f_5 == 6)
	{
		return true;
	}
	return false;
}

bool func_150(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if ((uParam0->f_798 == 1 || ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1])) || !PED::IS_PED_READY_TO_RENDER(uParam0->f_123[iParam1]))
	{
		return false;
	}
	func_245(uParam0->f_123[iParam1]);
	bVar0 = DECORATOR::DECOR_EXIST_ON(uParam0->f_123[iParam1], "Fish_Prevent_Tasking");
	bVar1 = DECORATOR::DECOR_EXIST_ON(uParam0->f_123[iParam1], "Fish_Weight");
	uParam0->f_216[iParam1] = ENTITY::GET_ENTITY_MODEL(uParam0->f_123[iParam1]);
	uParam0->f_247[iParam1] = func_246(uParam0->f_216[iParam1]);
	if (bVar1 == 0)
	{
		uParam0->f_278[iParam1] = func_247(uParam0->f_247[iParam1]);
		DECORATOR::DECOR_SET_FLOAT(uParam0->f_123[iParam1], "Fish_Weight", uParam0->f_278[iParam1]);
	}
	else
	{
		uParam0->f_278[iParam1] = DECORATOR::DECOR_GET_FLOAT(uParam0->f_123[iParam1], "Fish_Weight");
	}
	uParam0->f_309[iParam1] = func_248(uParam0->f_216[iParam1]);
	uParam0->f_402[iParam1] = 0f;
	func_249(uParam0->f_123[iParam1], 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_123[iParam1], false);
	func_250(uParam0, iParam1);
	PED::SET_PED_RESET_FLAG(uParam0->f_123[iParam1], 169, true);
	if (bVar0 == 0)
	{
		DECORATOR::DECOR_SET_BOOL(uParam0->f_123[iParam1], "Fish_Prevent_Tasking", false);
		if (func_48(16))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_123[iParam1], 20, false);
		}
		if (((!func_156(uParam0->f_123[iParam1], 471.6342f) && !func_156(uParam0->f_123[iParam1], 2.40763E-20f)) && !func_156(uParam0->f_123[iParam1], -1.244518E+11f)) && !PED::IS_PED_FLEEING(uParam0->f_123[iParam1]))
		{
			TASK::TASK_ANIMAL_UNALERTED(uParam0->f_123[iParam1], -1, 0, 0, 0);
		}
	}
	uParam0->f_798 = 1;
	return true;
}

void func_151(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam1->f_706[iParam2 /*3*/] = { 0f, 0f, 0f };
	uParam1->f_439[iParam2] = 0;
	iVar0 = func_115(uParam0, iParam2);
	if (iVar0 != -1)
	{
		func_43(uParam0, uParam1, -1);
	}
	func_145(uParam1, iParam2, 4);
}

bool func_152(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iParam1]))
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_123[iParam1], "Fish_Prevent_Tasking"))
		{
			if (DECORATOR::DECOR_GET_BOOL(uParam0->f_123[iParam1], "Fish_Prevent_Tasking") == 0)
			{
				return true;
			}
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(uParam0->f_123[iParam1], "Fish_Prevent_Tasking", false);
		}
	}
	return false;
}

bool func_153(var uParam0, var uParam1)
{
	if ((!func_38(uParam0->f_4) && !ENTITY::IS_ENTITY_DEAD(*uParam1)) && func_39(*uParam1, uParam0->f_4, 0) < 1112014848)
	{
		return false;
	}
	return true;
}

bool func_154(var uParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_FLEEING(uParam1->f_123[iParam2]))
	{
		return false;
	}
	if (func_56(uParam0, 512) && func_39(func_138(), func_143(uParam1, iParam2), 0) < 5f)
	{
		uParam1->f_706[iParam2 /*3*/] = { func_139() };
		return true;
	}
	return false;
}

void func_155(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = func_115(uParam1, iParam3);
	if (iVar1 != -1)
	{
		func_251();
		func_227(uParam0, uParam1);
		func_228(512);
		func_43(uParam1, uParam2, -1);
		Global_1902818.f_5.f_7 = 0;
	}
	else if (func_38(uParam2->f_706[iParam3 /*3*/]))
	{
		uParam2->f_706[iParam3 /*3*/] = { Global_34 };
	}
	func_93(&(uParam2->f_524[iParam3 /*3*/]));
	func_53(&(uParam2->f_615[iParam3 /*3*/]));
	if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iParam3]))
	{
		func_250(uParam2, iParam3);
		ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iParam3], false);
		PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iParam3], 17, false);
	}
	if (iVar0 == 1)
	{
		func_145(uParam2, iParam3, 8);
	}
	else
	{
		func_145(uParam2, iParam3, 4);
	}
}

bool func_156(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2.003139E+37f && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_157(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam2->f_154[iParam3] == 6)
	{
		func_252(uParam1, uParam2, iParam3);
		func_253(uParam0, uParam1, uParam2, iParam3);
		if (func_254(uParam1) || func_255(uParam1))
		{
			if (!func_256(uParam0, uParam2, iParam3))
			{
				uParam2->f_154[iParam3] = 7;
			}
		}
	}
	else
	{
		func_257(uParam1, uParam2, iParam3);
		func_22(uParam1);
		if ((func_258(uParam1) || func_259(uParam0, uParam1)) || func_256(uParam0, uParam2, iParam3))
		{
			uParam2->f_154[iParam3] = 6;
		}
	}
	if (uParam2->f_185[iParam3] != uParam2->f_154[iParam3])
	{
		uParam2->f_185[iParam3] = uParam2->f_154[iParam3];
		uParam1->f_176 = 0;
		TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
	}
}

void func_158(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (((uParam0->f_200 == 0 || uParam0->f_200 == 6) || uParam0->f_200 == 7) || uParam0->f_200 == 8)
	{
		uParam0->f_201 = 0;
		if (func_51(&(uParam0->f_188)))
		{
			func_260(&(uParam0->f_188));
		}
		if (func_51(&(uParam0->f_191)))
		{
			func_260(&(uParam0->f_191));
		}
		return;
	}
	fVar0 = ENTITY::GET_ENTITY_HEADING(uParam1->f_123[iParam2]);
	fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 + 1135869952);
	}
	if (fVar2 >= 1127481344)
	{
		uParam0->f_201 = 4;
	}
	else
	{
		uParam0->f_201 = 3;
	}
	if (uParam0->f_201 == 4)
	{
		if (IntToFloat(func_127()) < -1043857408 && func_261())
		{
			if (func_81(uParam1, iParam2))
			{
				if (func_51(&(uParam0->f_188)))
				{
					func_262(&(uParam0->f_188));
				}
				else
				{
					func_93(&(uParam0->f_188));
				}
			}
			else if (func_51(&(uParam0->f_191)))
			{
				func_262(&(uParam0->f_191));
			}
			else
			{
				func_93(&(uParam0->f_191));
			}
		}
		else
		{
			if (func_51(&(uParam0->f_188)))
			{
				func_260(&(uParam0->f_188));
			}
			if (func_51(&(uParam0->f_191)))
			{
				func_260(&(uParam0->f_191));
			}
		}
	}
	else if (uParam0->f_201 == 3)
	{
		if (IntToFloat(func_127()) > 1103626240 && func_261())
		{
			if (func_81(uParam1, iParam2))
			{
				if (func_51(&(uParam0->f_188)))
				{
					func_262(&(uParam0->f_188));
				}
				else
				{
					func_93(&(uParam0->f_188));
				}
			}
			else if (func_51(&(uParam0->f_191)))
			{
				func_262(&(uParam0->f_191));
			}
			else
			{
				func_93(&(uParam0->f_191));
			}
		}
		else
		{
			if (func_51(&(uParam0->f_188)))
			{
				func_260(&(uParam0->f_188));
			}
			if (func_51(&(uParam0->f_191)))
			{
				func_260(&(uParam0->f_191));
			}
		}
	}
	else
	{
		if (func_51(&(uParam0->f_188)))
		{
			func_260(&(uParam0->f_188));
		}
		if (func_51(&(uParam0->f_191)))
		{
			func_260(&(uParam0->f_191));
		}
	}
}

void func_159(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;

	if (func_263(uParam1, 0))
	{
		if (func_156(uParam2->f_123[iParam3], 672823.8f))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
		}
		return;
	}
	if (!func_264(uParam1))
	{
		return;
	}
	vVar0 = { func_143(uParam2, iParam3) };
	uParam1->f_218 = 0;
	if (uParam1->f_17 < 1036831949)
	{
		uParam1->f_200 = 7;
	}
	else if (func_265(uParam1, uParam2, iParam3))
	{
		uParam1->f_200 = 8;
	}
	else if (!func_238(uParam0, vVar0))
	{
		func_266(uParam1, uParam2, iParam3);
	}
	else if (func_267(uParam1, uParam2, iParam3))
	{
		func_268(uParam0, uParam1, uParam2, iParam3, vVar0);
	}
	if (((uParam1->f_200 == 8 || uParam1->f_200 == 7) || uParam1->f_200 == 6) || uParam1->f_200 == 0)
	{
		uParam1->f_222 = 0f;
		uParam1->f_223 = 0;
		uParam1->f_224 = 0;
		if (func_156(uParam2->f_123[iParam3], 672823.8f))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
		}
	}
	else
	{
		func_269(uParam1, uParam2, iParam3);
		if (uParam1->f_223 == 1 || !func_156(uParam2->f_123[iParam3], 672823.8f))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam2->f_123[iParam3]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam2->f_123[iParam3], false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_123[iParam3], true, true);
			}
			TASK::TASK_GO_TO_ENTITY(uParam2->f_123[iParam3], uParam1->f_8, -1, 0.1f, uParam1->f_222, 0.1f, 1);
			uParam1->f_223 = 0;
			uParam1->f_224 = 0;
		}
	}
	if (uParam1->f_200 == 7)
	{
		if (!func_51(&(uParam1->f_219)))
		{
			func_93(&(uParam1->f_219));
		}
		if (func_135(&(uParam1->f_219)))
		{
			func_262(&(uParam1->f_219));
		}
	}
	else if (func_51(&(uParam1->f_219)) && !func_135(&(uParam1->f_219)))
	{
		func_260(&(uParam1->f_219));
	}
}

void func_160(var uParam0, var uParam1, var uParam2, int iParam3)
{
	vector3 vVar0;
	float fVar3;

	if (((func_51(&(uParam1->f_196)) && func_52(&(uParam1->f_196)) < uParam1->f_199) || !func_81(uParam2, iParam3)) || !func_270(uParam1))
	{
		return;
	}
	vVar0 = { func_271(func_143(uParam2, iParam3), 0) };
	if (func_38(vVar0))
	{
		return;
	}
	func_93(&(uParam1->f_196));
	if (func_82(uParam1) > 1061997773)
	{
		uParam1->f_199 = MISC::GET_RANDOM_INT_IN_RANGE(150, 250);
	}
	else
	{
		uParam1->f_199 = MISC::GET_RANDOM_INT_IN_RANGE(250, 350);
	}
	fVar3 = 1f;
	if (uParam2->f_309[iParam3] == 0)
	{
		fVar3 = 1061997773; /* Float: 0.8f */
	}
	else if (uParam2->f_309[iParam3] == 1)
	{
		fVar3 = 1063675494; /* Float: 0.9f */
	}
	else if (uParam2->f_309[iParam3] == 2)
	{
		fVar3 = 1f;
	}
	else if (uParam2->f_309[iParam3] == 3)
	{
		fVar3 = 1066192077; /* Float: 1.1f */
	}
	else if (uParam2->f_309[iParam3] == 4)
	{
		fVar3 = 1067030938; /* Float: 1.2f */
	}
	GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_mg_fish_struggle", vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), fVar3, false, false, false);
	func_272(uParam0, uParam1, uParam2, iParam3);
}

float func_161(var uParam0)
{
	if (!func_51(uParam0))
	{
		return 0f;
	}
	if (func_135(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_273() - uParam0->f_1);
}

void func_162(var uParam0, var uParam1)
{
	int iVar0;

	if (func_56(uParam0, 32))
	{
		iVar0 = func_77(uParam0);
		if (func_126(iVar0) && uParam1->f_309[iVar0] != 4)
		{
			if (uParam1->f_154[iVar0] == 9)
			{
				func_21(uParam0, uParam1, iVar0, 1, 1);
			}
		}
	}
}

int func_163()
{
	if (func_44())
	{
		return WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(PLAYER::PLAYER_PED_ID(), 0);
	}
	return 0;
}

void func_164(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = ENTITY::DOES_ENTITY_EXIST(func_141());
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (((Global_1902818.f_5 == 6 || Global_1902818.f_5 == 10) && bVar0 == 1) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_123[iVar1]))
		{
			uParam0->f_23[iVar1] = func_274(func_143(uParam1, iVar1), func_142());
		}
		else
		{
			uParam0->f_23[iVar1] = 1203982208; /* Float: 99999f */
		}
		iVar1++;
	}
}

void func_165(var uParam0)
{
	func_47(uParam0);
	uParam0->f_18 = 0;
}

void func_166(var uParam0, var uParam1, var uParam2)
{
	func_275(uParam0, uParam1, uParam2);
	func_96(uParam1, 1024);
	if (func_276() || PAD::IS_CONTROL_PRESSED(0, -2.896624E-12f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
		if (func_277())
		{
			func_108();
		}
		UIFEED::UI_FEED_CLEAR_CHANNEL(2, true, false);
		func_47(uParam0);
	}
	else
	{
		func_278(&(uParam0->f_82), 25, 0);
		func_278(&(uParam0->f_82), 27, 0);
		func_278(&(uParam0->f_82), 29, 0);
		if (func_279())
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
			PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
		}
		else if (func_213(Global_38.f_5811))
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0) && PLAYER::_0xF4CB347D7B5EB0FD())
			{
				func_280(uParam0, 23, 0, -1, 1);
			}
			else
			{
				func_280(uParam0, 22, 0, -1, 1);
			}
		}
		if (func_281())
		{
			func_282(uParam0, 7, 0, 1);
		}
		func_283(uParam0, uParam1, uParam2);
	}
	func_284(uParam0, uParam1);
}

void func_167(var uParam0, var uParam1, var uParam2)
{
	func_275(uParam0, uParam1, uParam2);
	func_285(uParam1);
	if (func_279())
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
	}
	func_278(&(uParam0->f_82), 22, 0);
	func_278(&(uParam0->f_82), 23, 0);
	func_278(&(uParam0->f_82), 27, 0);
	func_278(&(uParam0->f_82), 29, 0);
	func_286(uParam0);
	func_47(uParam0);
}

void func_168(var uParam0)
{
	func_278(&(uParam0->f_82), 22, 0);
	func_278(&(uParam0->f_82), 23, 0);
	func_278(&(uParam0->f_82), 25, 0);
	func_280(uParam0, 27, 1, -1, 1);
}

void func_169(var uParam0, var uParam1)
{
	func_47(uParam0);
	func_278(&(uParam0->f_82), 27, 0);
	func_278(&(uParam0->f_82), 29, 0);
	func_287(uParam0, uParam0->f_5);
	func_288(uParam0);
	func_289(uParam1);
	func_96(uParam1, 1);
}

void func_170()
{
}

void func_171(var uParam0, var uParam1, var uParam2)
{
	if (func_182(1))
	{
		return;
	}
	func_290(uParam0, uParam1);
	func_291(uParam1);
	func_289(uParam1);
	func_264(uParam1);
	func_292(uParam0, uParam1);
	if (!func_56(uParam1, 4096) && !func_293())
	{
		func_295(uParam0, func_294(uParam0));
		func_296(uParam0, uParam1);
		func_297(uParam0, uParam1, uParam2);
	}
	func_298(uParam0, uParam1);
	func_299(uParam0, uParam1, uParam2);
	if (func_300(uParam0, uParam1))
	{
		func_301(uParam1, 4096);
		func_180(128, 1);
		func_302(8);
		func_23(uParam1);
		func_229(uParam0, uParam1, uParam2, 2);
		func_287(uParam0, uParam0->f_6);
		func_47(uParam0);
		if ((!func_213(Global_38.f_5811) && uParam1->f_54 == 0) && uParam1->f_3 == 1)
		{
			func_280(uParam0, 54, 1, -2, 1);
		}
		else if (func_277())
		{
			func_108();
		}
	}
	else if (func_303(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_304(uParam1);
	}
}

void func_172(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	func_302(1);
	if (!func_51(&(uParam1->f_179)))
	{
		func_93(&(uParam1->f_179));
	}
	func_278(&(uParam0->f_82), 30, 0);
	func_278(&(uParam0->f_82), 37, 0);
	func_278(&(uParam0->f_82), 31, 0);
	func_278(&(uParam0->f_82), 32, 0);
	func_278(&(uParam0->f_82), 33, 0);
	func_278(&(uParam0->f_82), 34, 0);
	func_278(&(uParam0->f_82), 39, 0);
	func_297(uParam0, uParam1, uParam2);
	if (!func_293())
	{
		func_282(uParam0, 4, 0, 1);
	}
	iVar0 = func_77(uParam1);
	if (func_126(iVar0) && !func_81(uParam2, iVar0))
	{
		if (func_51(&(uParam0->f_82.f_148[57 /*3*/])))
		{
			func_280(uParam0, 57, 0, -2, 0);
		}
		if (func_51(&(uParam0->f_82.f_148[56 /*3*/])) && !TASK::_0x5952DFA38FA529FE())
		{
			func_280(uParam0, 56, 0, -2, 0);
		}
	}
	if (func_263(uParam1, 1))
	{
		func_180(8, 1);
	}
	else if (func_305(uParam0, uParam1, uParam2))
	{
		func_306(uParam0, uParam1, uParam2);
		func_180(2, 1);
	}
	else
	{
		func_307(uParam0, uParam1, uParam2);
	}
}

void func_173(var uParam0)
{
	func_47(uParam0);
	uParam0->f_18 = 0;
}

void func_174(var uParam0, var uParam1, var uParam2)
{
	if (func_308(256, 1))
	{
		func_309(uParam0, uParam1, uParam2);
	}
}

void func_175(var uParam0, var uParam1, var uParam2)
{
	func_228(1);
	func_171(uParam0, uParam1, uParam2);
	func_278(&(uParam0->f_82), 30, 0);
	func_278(&(uParam0->f_82), 37, 0);
	func_278(&(uParam0->f_82), 31, 0);
	func_278(&(uParam0->f_82), 32, 0);
	func_278(&(uParam0->f_82), 33, 0);
	func_278(&(uParam0->f_82), 34, 0);
	func_278(&(uParam0->f_82), 39, 0);
}

void func_176(var uParam0, var uParam1, var uParam2)
{
	func_306(uParam0, uParam1, uParam2);
	func_278(&(uParam0->f_82), 43, 0);
	func_278(&(uParam0->f_82), 45, 0);
	func_278(&(uParam0->f_82), 46, 0);
	func_278(&(uParam0->f_82), 47, 0);
	func_278(&(uParam0->f_82), 72, 0);
	func_278(&(uParam0->f_82), 49, 0);
	func_287(uParam0, uParam0->f_8);
}

void func_177(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	func_310(uParam0, uParam1, uParam2);
	if (!func_56(uParam1, 32768) && func_308(32, 1))
	{
		func_301(uParam1, 32768);
	}
	if ((func_56(uParam1, 32768) && !func_56(uParam1, 64)) && !func_56(uParam1, 32))
	{
		func_311(uParam1, uParam2);
		func_312(uParam0, uParam1);
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			func_313(&(uParam0->f_19), uParam2->f_340[iVar0]);
		}
		if (func_308(4, 1))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if (!func_126(iVar0))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if (ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0]))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else
		{
			func_315(uParam0, uParam1, uParam2);
		}
	}
	func_316(uParam1);
	func_317(uParam1);
	func_318(uParam0, uParam1, uParam2);
	func_319();
	func_320(uParam0, uParam1, uParam2);
}

void func_178(var uParam0)
{
	func_47(uParam0);
	uParam0->f_18 = 0;
	func_321(uParam0);
}

void func_179(var uParam0)
{
	if ((Global_1902818.f_5 <= 1 || Global_1902818.f_5 == 9) || Global_1902818.f_5 == 13)
	{
		func_109(uParam0, 0);
	}
	else
	{
		func_109(uParam0, 1);
	}
}

void func_180(int iParam0, int iParam1)
{
	if (!func_322(iParam0))
	{
		func_123(&(Global_1902818.f_5.f_6), iParam0);
		if (iParam1 == 1)
		{
		}
	}
}

bool func_181()
{
	if (Global_1902818.f_5 == 1)
	{
		return true;
	}
	return false;
}

bool func_182(int iParam0)
{
	return func_122(Global_1902818.f_2, iParam0);
}

float func_183(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_184(var uParam0, int iParam1)
{
	char* sVar0;
	float fVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		sVar0 = func_203(iVar2);
		fVar1 = 0f;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && DECORATOR::DECOR_EXIST_ON(iParam1, sVar0))
		{
			fVar1 = DECORATOR::DECOR_GET_FLOAT(iParam1, sVar0);
		}
		if (fVar1 > 0f && ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
		{
			func_323(uParam0, iVar2, fVar1);
		}
		else
		{
			func_324(uParam0, iVar2);
		}
		iVar2++;
	}
}

void func_185(var uParam0, int iParam1, int iParam2)
{
}

void func_186(var uParam0, int iParam1, int iParam2)
{
}

void func_187(var uParam0, int iParam1, int iParam2)
{
}

void func_188(var uParam0, int iParam1, int iParam2)
{
}

void func_189(var uParam0, int iParam1, int iParam2)
{
}

void func_190(var uParam0, int iParam1, int iParam2)
{
}

void func_191(var uParam0, int iParam1, int iParam2)
{
}

void func_192(var uParam0, int iParam1, int iParam2)
{
}

void func_193(var uParam0, int iParam1, int iParam2)
{
}

void func_194(var uParam0, int iParam1, int iParam2)
{
}

void func_195(var uParam0, int iParam1, int iParam2)
{
}

void func_196(var uParam0, int iParam1, int iParam2)
{
}

void func_197(var uParam0, int iParam1, int iParam2)
{
}

void func_198(var uParam0, int iParam1, int iParam2)
{
}

void func_199(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_324(uParam0, iVar0);
		iVar0++;
	}
}

int func_200()
{
	return Global_1572887.f_14;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Fish_Attractor_Bluegill";
		case 1:
			return "Fish_Attractor_BullheadCatfish";
		case 2:
			return "Fish_Attractor_ChainPickerel";
		case 3:
			return "Fish_Attractor_ChannelCatfish";
		case 4:
			return "Fish_Attractor_LakeSturgeon";
		case 5:
			return "Fish_Attractor_LargemouthBass";
		case 6:
			return "Fish_Attractor_LongnoseGar";
		case 7:
			return "Fish_Attractor_Muskie";
		case 8:
			return "Fish_Attractor_NorthernPike";
		case 9:
			return "Fish_Attractor_Perch";
		case 10:
			return "Fish_Attractor_RedfinPickerel";
		case 11:
			return "Fish_Attractor_RockBass";
		case 12:
			return "Fish_Attractor_SmallmouthBass";
		case 13:
			return "Fish_Attractor_SockeyeSalmon";
		case 14:
			return "Fish_Attractor_SteelheadTrout";
		default:
			break;
	}
	return "";
}

int func_204()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_34);
}

bool func_205(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 0);
}

void func_206(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_325())
	{
		return;
	}
	sVar1 = func_326(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_327(iParam4))
	{
		if (func_328(iParam0))
		{
			iParam4 = func_330(func_329(iParam0));
		}
		else
		{
			iParam4 = func_330(iParam1);
		}
	}
	if (func_327(iParam4))
	{
		iVar3 = func_331(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_333(func_332(iParam2));
	}
	else if ((func_334(iParam1, 2) || func_335(iParam4, 2)) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893611.f_9 = 1;
	}
	else if ((func_328(iParam0) && func_336(iParam0, 2.350989E-38f)) && !Global_1893611.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893611.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893611.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1893611.f_9 = 1;
	}
	else
	{
		iVar4 = func_338(func_337());
		iVar5 = func_339(func_337());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_34);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_340(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_216(&cVar6, 4.808429E-35f), sVar9, func_216(&cVar10, 4.808429E-35f));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_340(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_216(&cVar6, 4.808429E-35f), func_216(&cVar10, 4.808429E-35f));
		}
		Global_1893611.f_9 = 0;
	}
	Global_1939089.f_145 = func_341(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_207(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_273() - fParam1);
	func_342(uParam0, 1);
	func_343(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_208(bool bParam0)
{
	if (func_200() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_344(bParam0));
}

bool func_209()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

bool func_210(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_345(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_346(bParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_347(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_348(bParam0))
			{
				return true;
			}
			break;
	}
	return func_217(bParam0, 0, 0, 0) >= iParam1;
}

int func_211(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_349(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_212()
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;
	int iVar10;
	struct<5> Var11;
	struct<4> Var16;

	if ((((((!func_210(-5710.982f, 1) && !func_210(1.441069E+37f, 1)) && !func_210(-3.968113E-35f, 1)) && !func_210(8.997693E+26f, 1)) && !func_210(4.412607E+09f, 1)) && !func_210(0.4557617f, 1)) && !func_210(-1.203225E-30f, 1))
	{
		iVar0 = func_344(0);
		Var1 = { func_350(9.248502E+28f, 0, 0) };
		Var6 = { func_351(9.248502E+28f, Var1, Var1.f_4, 0) };
		if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_HIDDEN(iVar0, &Var6))
		{
			INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2(iVar0, &Var6, false);
		}
	}
	else
	{
		iVar10 = func_344(0);
		Var11 = { func_350(9.248502E+28f, 0, 0) };
		Var16 = { func_351(9.248502E+28f, Var11, Var11.f_4, 0) };
		if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_HIDDEN(iVar10, &Var16))
		{
			INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2(iVar10, &Var16, true);
		}
	}
}

bool func_213(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if ((((((((((((iParam0 == -1.072744E-16f || iParam0 == 0.6467319f) || iParam0 == 2.089274E-21f) || iParam0 == 2.173288E+11f) || iParam0 == -7.975852E-25f) || iParam0 == 1.422386E-33f) || iParam0 == 1.441069E+37f) || iParam0 == -5710.982f) || iParam0 == -3.968113E-35f) || iParam0 == 4.412607E+09f) || iParam0 == 8.997693E+26f) || iParam0 == 0.4557617f) || iParam0 == -1.203225E-30f)
	{
		return true;
	}
	return false;
}

void func_214(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	char* sVar1;

	if (Global_38.f_5811 != iParam2 || iParam4 == 1)
	{
		Global_38.f_5811 = iParam2;
		uParam1->f_55 = 0;
		uParam1->f_56 = 0;
		func_352(uParam1, Global_38.f_5811);
		bVar0 = func_353(uParam1);
		sVar1 = func_354(Global_38.f_5811);
		if (iParam3 == 1)
		{
			TASK::TASK_SWAP_FISHING_BAIT(PLAYER::PLAYER_PED_ID(), sVar1, bVar0);
		}
		else
		{
			TASK::_SET_FISHING_BAIT(PLAYER::PLAYER_PED_ID(), sVar1, bVar0, true);
		}
		func_355(uParam0);
		func_212();
		uParam0->f_58 = 0;
		func_356();
		func_101();
		func_357(uParam0);
	}
}

char* func_215(bool bParam0)
{
	bool bVar0;

	if (!func_345(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_358(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

char* func_216(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_359(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_217(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_345(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_346(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_360(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_361(bParam0, 0);
	}
	if (func_362(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_344(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_363(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_344(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_218(bool bParam0)
{
	if (((((bParam0 == 0.6467319f || bParam0 == 2.089274E-21f) || bParam0 == 2.173288E+11f) || func_220(bParam0)) || bParam0 == 6.236711E+08f) || bParam0 == 9.248502E+28f)
	{
		return true;
	}
	return false;
}

bool func_219(int iParam0)
{
	if ((iParam0 == 1.441069E+37f || iParam0 == -5710.982f) || iParam0 == -3.968113E-35f)
	{
		return true;
	}
	return false;
}

bool func_220(bool bParam0)
{
	if (((bParam0 == 4.412607E+09f || bParam0 == 8.997693E+26f) || bParam0 == 0.4557617f) || bParam0 == -1.203225E-30f)
	{
		return true;
	}
	return false;
}

void func_221(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_222()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 1008981770)
	{
		return 19;
	}
	if (fVar0 < 1042536202)
	{
		return 15;
	}
	if (fVar0 < 1050589266)
	{
		return 17;
	}
	if (fVar0 < 1055622431)
	{
		return 16;
	}
	if (fVar0 < 1058810102)
	{
		return 18;
	}
	return 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

int func_224(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_225(int iParam0)
{
	return iParam0 != 0;
}

void func_226(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_227(var uParam0, var uParam1)
{
	uParam1->f_165 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_52, uParam0->f_53 + 1);
	func_93(&(uParam1->f_203));
}

void func_228(int iParam0)
{
	if (func_322(iParam0))
	{
		func_133(&(Global_1902818.f_5.f_6), iParam0);
	}
}

void func_229(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	if (func_56(uParam1, 8192) && func_56(uParam1, 16384))
	{
		return;
	}
	if (uParam1->f_163 == 0)
	{
		return;
	}
	if ((func_51(&(uParam1->f_160)) && func_52(&(uParam1->f_160)) > uParam1->f_166) && iParam3 != 0)
	{
		return;
	}
	iVar0 = func_77(uParam1);
	if (!func_126(iVar0))
	{
		return;
	}
	if (iParam3 == 0)
	{
		sVar1 = "LARGE_BITE_FISH_END";
		sVar2 = "LARGE_BITE_ROD_END";
	}
	else if (iParam3 == 1)
	{
		sVar1 = "LARGE_BITE_FISH_HOOKED";
		sVar2 = "LARGE_BITE_ROD_HOOKED";
	}
	else
	{
		sVar1 = "LARGE_BITE_FISH_FLEE";
		sVar2 = "LARGE_BITE_ROD_FLEE";
	}
	if (!func_56(uParam1, 8192) && AUDIO::_HAS_SOUND_ID_FINISHED(uParam1->f_67))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY_WITH_SET(uParam1->f_67, sVar1, func_138(), *uParam0, false, 0);
		AUDIO::_SET_VARIABLE_ON_SOUND_WITH_ID(uParam1->f_67, "FishSize", uParam2->f_278[iVar0]);
		func_301(uParam1, 8192);
	}
	if (!func_56(uParam1, 16384) && AUDIO::_HAS_SOUND_ID_FINISHED(uParam1->f_68))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY_WITH_SET(uParam1->f_68, sVar2, PLAYER::PLAYER_PED_ID(), *uParam0, false, 0);
		AUDIO::_SET_VARIABLE_ON_SOUND_WITH_ID(uParam1->f_68, "FishSize", uParam2->f_278[iVar0]);
		func_301(uParam1, 16384);
	}
}

bool func_230(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1072759.f_22943.f_1 || Global_1072759.f_22943.f_1 == 0) || iParam1 > Global_1072759.f_22943) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::COPY_SCRIPT_STRUCT(&(Global_1072759.f_22943), &uVar1, 2);
		}
		else
		{
			Global_1072759.f_22943.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_1072759.f_22943 = iParam1;
		}
		if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
		{
		}
		return true;
	}
	return false;
}

void func_231(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_364(iParam1);
	if (func_365(iVar0) && FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_77[iParam1]))
	{
		FLOCK::_0xC3D581A34BC0A1F0(iVar0, uParam0->f_77[iParam1]);
		func_366(iParam1, 0f);
	}
}

void func_232(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_93[iParam1] != iParam2)
	{
		uParam0->f_93[iParam1] = iParam2;
	}
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_234(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951897[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3);
}

void func_235(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_234(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_367(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_368(iVar0);
	*uParam0 = 0;
}

void func_236(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_237(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_369();
	if (func_61(iVar0))
	{
		iVar1 = func_370(iVar0);
		uParam0->f_216[iParam1] = iVar1;
	}
}

bool func_238(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_371(uParam0, vParam1);
	iVar1 = func_372(vParam1);
	return (iVar0 == 1 && iVar1 == 1);
}

bool func_239(vector3 vParam0)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, 2331.62f, -1216.34f, 45f, false) < 1097859072 || MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, 210.38f, 1876.39f, 200.66f, false) < 1123680256)
	{
		return true;
	}
	return false;
}

bool func_240(vector3 vParam0, int iParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;

	iVar4 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vParam0, 10f), 0, &fVar0);
	bVar5 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vParam0, 10f), &fVar1, false);
	fVar2 = (fVar0 - fVar1);
	fVar3 = func_373(iParam3);
	if ((iVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		if (fVar2 > 2f)
		{
			fVar2 = 2f;
		}
		*uParam4 = (fVar0 - (fVar2 / 2f));
		return true;
	}
	return false;
}

int func_241(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_374(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_242(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_243(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_123[iVar0]) && uParam0->f_123[iVar0] == *uParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_244(var uParam0)
{
	if (!func_51(uParam0))
	{
		return 0;
	}
	if (func_135(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_136() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

void func_245(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(iParam0);
	}
}

int func_246(int iParam0)
{
	int iVar0;

	iVar0 = 15;
	switch (iParam0)
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			iVar0 = 0;
			break;
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
			iVar0 = 1;
			break;
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
			iVar0 = 2;
			break;
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
			iVar0 = 3;
			break;
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
			iVar0 = 4;
			break;
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
			iVar0 = 5;
			break;
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
			iVar0 = 6;
			break;
		case joaat("A_C_FISHMUSKIE_01_LG"):
			iVar0 = 7;
			break;
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
			iVar0 = 8;
			break;
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHPERCH_01_SM"):
			iVar0 = 9;
			break;
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
			iVar0 = 10;
			break;
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
			iVar0 = 11;
			break;
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
			iVar0 = 12;
			break;
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
			iVar0 = 13;
			break;
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
			iVar0 = 14;
			break;
		default:
			break;
	}
	return iVar0;
}

float func_247(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = func_375(iParam0, 1);
	fVar1 = func_376(iParam0, 1);
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar0, fVar1);
	fVar3 = func_377(fVar2);
	return fVar3;
}

int func_248(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("A_C_FISHBLUEGIL_01_SM"):
		case joaat("A_C_FISHROCKBASS_01_SM"):
		case joaat("A_C_FISHCHAINPICKEREL_01_SM"):
		case joaat("A_C_FISHREDFINPICKEREL_01_SM"):
		case joaat("A_C_FISHPERCH_01_SM"):
		case joaat("A_C_FISHBULLHEADCAT_01_SM"):
			iVar0 = 0;
			break;
		case joaat("A_C_FISHROCKBASS_01_MS"):
		case joaat("A_C_FISHCHAINPICKEREL_01_MS"):
		case joaat("A_C_FISHPERCH_01_MS"):
		case joaat("A_C_FISHREDFINPICKEREL_01_MS"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
		case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
		case joaat("A_C_FISHBULLHEADCAT_01_MS"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_MS"):
		case joaat("A_C_FISHBLUEGIL_01_MS"):
			iVar0 = 1;
			break;
		case joaat("A_C_FISHCHANNELCATFISH_01_XL"):
		case joaat("A_C_FISHSMALLMOUTHBASS_01_LG"):
		case joaat("A_C_FISHMUSKIE_01_LG"):
		case joaat("A_C_FISHLONGNOSEGAR_01_LG"):
		case joaat("A_C_FISHLAKESTURGEON_01_LG"):
		case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
		case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
		case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
		case joaat("A_C_FISHNORTHERNPIKE_01_LG"):
		case joaat("A_C_FISHCHANNELCATFISH_01_LG"):
			iVar0 = 4;
			break;
		default:
			break;
	}
	return iVar0;
}

void func_249(int iParam0, bool bParam1)
{
	func_378(iParam0, bParam1);
}

void func_250(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(func_138()))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_123[iParam1], func_138(), false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_141()))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_123[iParam1], func_141(), false);
	}
}

void func_251()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_141()) && ENTITY::IS_ENTITY_ATTACHED(func_141()))
	{
		ENTITY::DETACH_ENTITY(func_141(), true, true);
	}
}

void func_252(var uParam0, var uParam1, int iParam2)
{
	if (func_51(&(uParam0->f_182)))
	{
		return;
	}
	if (!func_61(uParam1->f_247[iParam2]))
	{
		return;
	}
	if (uParam0->f_177 == 0)
	{
		uParam0->f_194 = func_379(uParam1, iParam2);
	}
	else
	{
		uParam0->f_194 = BUILTIN::ROUND((IntToFloat(uParam0->f_194) * 1064514355));
	}
	if (uParam0->f_194 < 4000)
	{
		uParam0->f_194 = 4000;
	}
	if (uParam0->f_177 > 0)
	{
		func_380(uParam0);
	}
	uParam0->f_177++;
	func_53(&(uParam0->f_185));
	func_53(&(uParam0->f_191));
	func_93(&(uParam0->f_182));
	func_53(&(uParam0->f_188));
	func_53(&(uParam0->f_196));
}

void func_253(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_126(iParam3))
	{
		return;
	}
	if (AUDIO::_HAS_SOUND_ID_FINISHED(uParam1->f_69))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY_WITH_SET(uParam1->f_69, "STRUGGLE", uParam2->f_123[iParam3], *uParam0, false, 0);
		AUDIO::_SET_VARIABLE_ON_SOUND_WITH_ID(uParam1->f_69, "FishSize", uParam2->f_278[iParam3]);
	}
}

int func_254(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_51(&(uParam0->f_188)))
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(func_52(&(uParam0->f_188))) / 2f));
	}
	iVar1 = (uParam0->f_194 - iVar0);
	if (iVar1 < 4000)
	{
		iVar1 = 4000;
	}
	if (func_51(&(uParam0->f_182)) && func_52(&(uParam0->f_182)) >= iVar1)
	{
		return 1;
	}
	return 0;
}

int func_255(var uParam0)
{
	if (func_263(uParam0, 0) || uParam0->f_200 == 7)
	{
		return 1;
	}
	return 0;
}

bool func_256(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_381(uParam1, iParam2);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 1064514355));
	return BUILTIN::TO_FLOAT(func_244(&(uParam0->f_12))) >= IntToFloat(iVar0 * 1000);
}

void func_257(var uParam0, var uParam1, int iParam2)
{
	if (func_51(&(uParam0->f_185)))
	{
		return;
	}
	if (!func_61(uParam1->f_247[iParam2]))
	{
		return;
	}
	if (uParam0->f_178 == 0)
	{
		uParam0->f_195 = func_382(uParam1, iParam2);
	}
	else
	{
		uParam0->f_195 = BUILTIN::ROUND((IntToFloat(uParam0->f_195) / 1065017672));
	}
	if (uParam0->f_195 > 10000)
	{
		uParam0->f_195 = 10000;
	}
	uParam0->f_178++;
	func_53(&(uParam0->f_182));
	func_53(&(uParam0->f_188));
	func_93(&(uParam0->f_185));
	func_53(&(uParam0->f_191));
}

int func_258(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_51(&(uParam0->f_191)))
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(func_52(&(uParam0->f_191))) / 2f));
	}
	iVar1 = (uParam0->f_195 + iVar0);
	if (iVar1 > 10000)
	{
		iVar1 = 10000;
	}
	if ((((func_51(&(uParam0->f_185)) && func_52(&(uParam0->f_185)) >= iVar1) && !func_263(uParam0, 0)) && uParam0->f_200 != 7) && func_270(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_259(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(uParam1->f_195) / 2f));
	if ((((((func_51(&(uParam1->f_185)) && func_52(&(uParam1->f_185)) >= iVar0) && func_51(&(uParam0->f_12))) && func_52(&(uParam0->f_12)) >= iVar0) && !func_263(uParam1, 0)) && uParam1->f_200 != 7) && func_270(uParam1))
	{
		return 1;
	}
	return 0;
}

void func_260(var uParam0)
{
	if (!func_51(uParam0))
	{
	}
	if (!func_135(uParam0))
	{
		uParam0->f_2 = (func_273() - uParam0->f_1);
		func_342(uParam0, 2);
	}
}

bool func_261()
{
	return true;
}

void func_262(var uParam0)
{
	if (!func_51(uParam0))
	{
	}
	if (func_135(uParam0))
	{
		uParam0->f_1 = (func_273() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_343(uParam0, 2);
	}
}

bool func_263(var uParam0, int iParam1)
{
	if (func_308(2, 1))
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	else if (Global_1902818.f_5.f_2 <= 1f)
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	else if (uParam0->f_200 == 8)
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	return false;
}

bool func_264(var uParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		iVar0 = func_383(0.6467319f);
		if (iVar0 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				uParam0->f_8 = OBJECT::CREATE_OBJECT(iVar0, Global_34, false, false, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_8, false);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_8, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_8, true);
				OBJECT::SET_OBJECT_TARGETTABLE(uParam0->f_8, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_8);
}

bool func_265(var uParam0, var uParam1, int iParam2)
{
	float fVar0;

	if (uParam0->f_16 != -943501440)
	{
		fVar0 = func_274(Global_34, func_143(uParam1, iParam2));
		if ((fVar0 < 5f && uParam0->f_16 > 1008981770) || (fVar0 < 1092616192 && uParam0->f_16 > 1028443341))
		{
			return true;
		}
	}
	return false;
}

void func_266(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;

	if (uParam0->f_200 != 5)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 15f, 0f) };
		vVar0.x = (vVar0.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
		vVar0.f_1 = (vVar0.y + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
		vVar3 = { func_271(vVar0, 0) };
		if (!func_38(vVar3))
		{
			fVar6 = func_384(vVar3, 0);
			fVar7 = func_373(ENTITY::GET_ENTITY_MODEL(uParam1->f_123[iParam2]));
			if (fVar6 > fVar7 && !func_385(vVar3))
			{
				vVar8 = { vVar3 };
				vVar8.f_2 = (vVar8.z - 1048576000);
				func_386(uParam0, vVar8);
				uParam0->f_200 = 5;
				uParam0->f_223 = 1;
			}
			else
			{
				uParam0->f_200 = 6;
			}
		}
		else
		{
			uParam0->f_200 = 6;
		}
	}
}

bool func_267(var uParam0, var uParam1, int iParam2)
{
	if (!func_270(uParam0))
	{
		return false;
	}
	if (func_387(uParam0, uParam1, iParam2))
	{
		return true;
	}
	if (!func_156(uParam1->f_123[iParam2], 672823.8f))
	{
		return true;
	}
	if (func_388(uParam1->f_123[iParam2], uParam0->f_8, 0, 1) < 1f)
	{
		return true;
	}
	if (uParam0->f_200 != 2 && func_388(PLAYER::PLAYER_PED_ID(), uParam1->f_123[iParam2], 0, 1) < 6f)
	{
		return true;
	}
	if (func_51(&(uParam0->f_215)) && func_52(&(uParam0->f_215)) > 3000)
	{
		if ((uParam0->f_201 == 4 && IntToFloat(func_127()) < -1043857408) || (uParam0->f_201 == 3 && IntToFloat(func_127()) > 1103626240))
		{
			uParam0->f_218 = 1;
			return true;
		}
	}
	return false;
}

void func_268(var uParam0, var uParam1, var uParam2, int iParam3, vector3 vParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;

	fVar0 = func_389(PLAYER::PLAYER_PED_ID(), uParam2->f_123[iParam3], 1);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	fVar3 = func_373(ENTITY::GET_ENTITY_MODEL(uParam2->f_123[iParam3]));
	if (uParam1->f_218 == 1)
	{
		if (func_127() < 0)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = 1;
		}
	}
	if (func_388(PLAYER::PLAYER_PED_ID(), uParam2->f_123[iParam3], 0, 1) < 6f)
	{
		uParam1->f_200 = 2;
	}
	else if (!func_81(uParam2, iParam3))
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-10, 10)));
		uParam1->f_200 = 1;
	}
	else if (func_390(iVar2))
	{
		fVar1 = (fVar0 - IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(65, 85)));
		uParam1->f_200 = 4;
	}
	else if (func_391(iVar2))
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(65, 85)));
		uParam1->f_200 = 3;
	}
	else
	{
		fVar1 = (fVar0 + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-10, 10)));
		uParam1->f_200 = 1;
	}
	if (uParam1->f_200 == 2)
	{
		vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, (6f + 1f), 0f) };
		vVar7 = { func_271(vVar4, 0) };
	}
	else
	{
		vVar4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam4, fVar1, 0f, 2.5f, 0f) };
		vVar7 = { func_271(vVar4, 0) };
	}
	if (!func_38(vVar7))
	{
		fVar10 = func_384(vVar7, 0);
		if ((!func_392(uParam1, fVar10, fVar3) || !func_238(uParam0, vVar7)) || func_385(vVar7))
		{
			uParam1->f_200 = 6;
		}
		else
		{
			vVar11 = { vVar7 };
			vVar11.f_2 = (vVar11.z - 1048576000);
			func_386(uParam1, vVar11);
		}
	}
}

void func_269(var uParam0, var uParam1, int iParam2)
{
	if (func_131())
	{
		uParam0->f_222 = 1f;
	}
	else if (func_393())
	{
		uParam0->f_222 = 1069547520; /* Float: 1.5f */
	}
	else if (func_81(uParam1, iParam2))
	{
		uParam0->f_222 = 3f;
	}
	else
	{
		uParam0->f_222 = 1069547520; /* Float: 1.5f */
	}
}

bool func_270(var uParam0)
{
	return (uParam0->f_16 != -943501440 && uParam0->f_16 < 1022739087);
}

Vector3 func_271(vector3 vParam0, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;

	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	vVar1 = { 0f, 0f, 0f };
	iVar6 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vParam0, 10f), iVar0, &fVar4);
	bVar7 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vParam0, 10f), &fVar5, false);
	if ((iVar6 == 1 || bVar7 == 0) || fVar4 > fVar5)
	{
		vVar1.x = vParam0.x;
		vVar1.f_1 = vParam0.y;
		vVar1.f_2 = fVar4;
	}
	return vVar1;
}

void func_272(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (!func_126(iParam3))
	{
		return;
	}
	iVar0 = func_394(uParam1);
	if (iVar0 > -1)
	{
		AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam1->f_70[iVar0], "VFX_SPLASH", func_139(), *uParam0, false, 0, true);
		AUDIO::_SET_VARIABLE_ON_SOUND_WITH_ID(uParam1->f_70[iVar0], "FishSize", uParam2->f_278[iParam3]);
	}
}

float func_273()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

float func_274(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_275(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 1))
	{
		return;
	}
	func_110(uParam1);
	if (func_56(uParam1, 128))
	{
		func_395(uParam1, uParam2);
		func_111(uParam0, uParam1, uParam2, 0, 0);
	}
	func_43(uParam1, uParam2, -1);
	func_228(512);
	uParam1->f_1 = 0;
	func_301(uParam1, 1);
	Global_1902818.f_5.f_6 = 0;
	func_302(1);
	func_302(2);
	func_302(4);
	func_302(8);
	func_302(16);
	func_302(32);
	uParam1->f_167 = 0;
	uParam1->f_194 = 0;
	uParam1->f_195 = 0;
	uParam1->f_177 = 0;
	uParam1->f_178 = 0;
	uParam1->f_200 = 0;
	uParam1->f_202 = 0f;
	uParam1->f_172 = 0;
	uParam1->f_173 = 0;
	uParam1->f_174 = 0;
	uParam1->f_175 = 0;
	uParam1->f_176 = 0;
	uParam1->f_156 = 0;
	uParam1->f_3 = 0;
	uParam1->f_168 = 1f;
	func_53(&(uParam1->f_169));
	func_53(&(uParam1->f_203));
	func_53(&(uParam1->f_182));
	func_53(&(uParam1->f_185));
	func_53(&(uParam1->f_188));
	func_53(&(uParam1->f_191));
	func_53(&(uParam1->f_179));
	func_53(&(uParam1->f_160));
	func_114(uParam1, 0);
	func_40(&(uParam0->f_82), 0);
	func_287(uParam0, uParam0->f_4);
	func_47(uParam0);
	func_120(uParam0, 16);
	func_20(&(uParam0->f_19));
	func_53(&(uParam0->f_73));
	func_53(&(uParam0->f_76));
	uParam0->f_47 = func_204();
	uParam0->f_48 = func_332(uParam0->f_47);
	func_357(uParam0);
	func_22(uParam1);
	func_23(uParam1);
	func_24(uParam1);
	func_212();
}

bool func_276()
{
	return ((func_396() || func_397()) || func_398());
}

bool func_277()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

void func_278(var uParam0, int iParam1, int iParam2)
{
	if (func_107((*uParam0)[iParam1]))
	{
		func_108();
		func_207(&(uParam0->f_442), 3f);
	}
	if (iParam2 == 1)
	{
		func_125(uParam0, iParam1);
	}
}

bool func_279()
{
	if (func_276())
	{
		return true;
	}
	return false;
}

int func_280(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (((((func_276() || func_399(&(uParam0->f_82), iParam1)) || func_107(uParam0->f_82[iParam1])) || func_400(&(uParam0->f_82), iParam1)) || ((iParam2 == 0 && func_51(&(uParam0->f_82.f_442))) && func_52(&(uParam0->f_82.f_442)) < 3000)) || (iParam2 == 0 && func_277()))
	{
		return 0;
	}
	func_108();
	if (iParam1 == 58)
	{
		uParam0->f_82[iParam1] = func_403(MISC::VAR_STRING(10, func_401(iParam1), func_402(Global_1902818.f_37)), iParam3, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_82[iParam1] = func_403(func_401(iParam1), iParam3, 0, 0, 0, 1);
	}
	if (iParam4 == 1)
	{
		uParam0->f_82.f_74[iParam1] = 1;
	}
	func_93(&(uParam0->f_82.f_442));
	return 1;
}

bool func_281()
{
	if (func_293())
	{
		return false;
	}
	return true;
}

void func_282(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_46())
	{
		return;
	}
	if (iParam1 == 3)
	{
		if (HUD::_UI_PROMPT_IS_VALID(uParam0->f_70))
		{
			return;
		}
	}
	else if (func_234(uParam0->f_60[iParam1]))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_GRIP", -1.684686E+34f, 3, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_405(uParam0->f_60[iParam1], 1);
			iVar0 = func_367(uParam0->f_60[iParam1]);
			if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
			{
				HUD::_UI_PROMPT_SET_TAG(Global_1951897[iVar0 /*23*/].f_3, "CTX_GRIP");
			}
			break;
		case 1:
			if (Global_1902818.f_5 == 6 || Global_1902818.f_5 == 10)
			{
				uParam0->f_60[iParam1] = func_404("MGFSH_CTX_RESET", -1.290895E-07f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			}
			else
			{
				uParam0->f_60[iParam1] = func_404("MGFSH_CTX_CUT_LINE", -1.290895E-07f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			}
			break;
		case 2:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_HOOK", -1.389564E-18f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_406(uParam0->f_60[iParam1], 0, 1, 1);
			func_405(uParam0->f_60[iParam1], 1);
			func_407(uParam0->f_60[iParam1], 3.101329E-34f);
			iVar0 = func_367(uParam0->f_60[iParam1]);
			if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
			{
				HUD::_UI_PROMPT_SET_TAG(Global_1951897[iVar0 /*23*/].f_3, "CTX_HOOK");
			}
			break;
		case 3:
			uParam0->f_528 = TASK::_0x5952DFA38FA529FE();
			uParam0->f_70 = HUD::_UI_PROMPT_REGISTER_BEGIN();
			HUD::_UI_PROMPT_SET_TYPE(uParam0->f_70, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0) || uParam0->f_528 == 1)
			{
				HUD::_UI_PROMPT_SET_CONTROL_ACTION(uParam0->f_70, -7.153274E-18f);
			}
			else
			{
				HUD::_UI_PROMPT_SET_CONTROL_ACTION(uParam0->f_70, 7.1436E+09f);
				HUD::_UI_PROMPT_SET_CONTROL_ACTION(uParam0->f_70, -9.812416E-26f);
				HUD::_UI_PROMPT_SET_ROTATE_MODE(uParam0->f_70, 0f, false);
			}
			HUD::_UI_PROMPT_SET_ATTRIBUTE(uParam0->f_70, 10, true);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(uParam0->f_70, 11, true);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(uParam0->f_70, 18, true);
			if (iParam2 == 1)
			{
				HUD::_UI_PROMPT_SET_TEXT(uParam0->f_70, "MGFSH_CTX_REEL_LURE");
			}
			else
			{
				HUD::_UI_PROMPT_SET_TEXT(uParam0->f_70, "MGFSH_CTX_REEL_IN");
			}
			HUD::_UI_PROMPT_SET_TAG(uParam0->f_70, "CTX_REEL");
			HUD::_UI_PROMPT_REGISTER_END(uParam0->f_70);
			break;
		case 4:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_CONTROL", 2.675111E+25f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_405(uParam0->f_60[iParam1], 1);
			break;
		case 5:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_THROW_BACK", -1.029119E+30f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			break;
		case 6:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_KEEP", 4.246925E+11f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			if (iParam3 == 0)
			{
				func_406(uParam0->f_60[iParam1], 0, 1, 1);
			}
			break;
		case 7:
			uParam0->f_60[iParam1] = func_404("MGFSH_CTX_CHOOSE", -2.896624E-12f, 3, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_405(uParam0->f_60[iParam1], 1);
			func_407(uParam0->f_60[iParam1], -1.076797E-08f);
			func_407(uParam0->f_60[iParam1], 6.94097E+19f);
			break;
		case 8:
			uParam0->f_60[iParam1] = func_404(MISC::VAR_STRING(10, "MGFSH_CTX_EQUIP", func_216(func_215(uParam0->f_58), 4.808429E-35f)), 4.252634E-16f, 0, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			break;
	}
}

void func_283(var uParam0, var uParam1, var uParam2)
{
	if ((!func_213(uParam0->f_57) || Global_38.f_5811 == uParam0->f_57) || func_293())
	{
		func_132(uParam0, 8);
		return;
	}
	if (!func_213(Global_38.f_5811))
	{
		if (uParam0->f_58 == 0)
		{
			if (func_210(uParam0->f_57, 1))
			{
				uParam0->f_58 = uParam0->f_57;
			}
			else if (func_210(0.6467319f, 1))
			{
				uParam0->f_58 = 0.6467319f;
			}
			else if (func_210(2.089274E-21f, 1))
			{
				uParam0->f_58 = 2.089274E-21f;
			}
			else if (func_210(2.173288E+11f, 1))
			{
				uParam0->f_58 = 2.173288E+11f;
			}
			else if (func_210(-7.975852E-25f, 1))
			{
				uParam0->f_58 = -7.975852E-25f;
			}
			else if (func_210(-1.072744E-16f, 1))
			{
				uParam0->f_58 = -1.072744E-16f;
			}
			else if (func_210(1.422386E-33f, 1))
			{
				uParam0->f_58 = 1.422386E-33f;
			}
			else if (func_210(1.441069E+37f, 1))
			{
				uParam0->f_58 = 1.441069E+37f;
			}
			else if (func_210(-5710.982f, 1))
			{
				uParam0->f_58 = -5710.982f;
			}
			else if (func_210(-3.968113E-35f, 1))
			{
				uParam0->f_58 = -3.968113E-35f;
			}
			else if (func_210(4.412607E+09f, 1))
			{
				uParam0->f_58 = 4.412607E+09f;
			}
			else if (func_210(8.997693E+26f, 1))
			{
				uParam0->f_58 = 8.997693E+26f;
			}
			else if (func_210(0.4557617f, 1))
			{
				uParam0->f_58 = 0.4557617f;
			}
			else if (func_210(-1.203225E-30f, 1))
			{
				uParam0->f_58 = -1.203225E-30f;
			}
			else
			{
				uParam0->f_58 = 0;
			}
		}
		if (uParam0->f_58 == 0)
		{
			func_132(uParam0, 8);
		}
		else
		{
			func_282(uParam0, 8, 0, 1);
		}
	}
	if (func_408(uParam0->f_60[8], 1))
	{
		Global_1902818.f_36 = uParam0->f_58;
	}
}

void func_284(var uParam0, var uParam1)
{
	if (Global_1902818.f_36 != 0)
	{
		if (Global_1902818.f_36 != Global_38.f_5811 && func_213(Global_1902818.f_36))
		{
			func_214(uParam0, uParam1, Global_1902818.f_36, 1, 0);
		}
		Global_1902818.f_36 = 0;
	}
}

void func_285(var uParam0)
{
	if (!func_56(uParam0, 1024))
	{
		Global_1902818.f_5.f_1 = 1106247680; /* Float: 30f */
		func_301(uParam0, 1024);
	}
}

void func_286(var uParam0)
{
	switch (Global_1902818.f_5.f_16)
	{
		case -1:
			func_278(&(uParam0->f_82), 15, 1);
			func_278(&(uParam0->f_82), 16, 1);
			func_278(&(uParam0->f_82), 17, 1);
			func_278(&(uParam0->f_82), 18, 1);
			func_278(&(uParam0->f_82), 19, 1);
			func_278(&(uParam0->f_82), 20, 1);
			func_278(&(uParam0->f_82), 21, 1);
			if (func_213(Global_38.f_5811))
			{
				func_280(uParam0, 25, 1, -1, 1);
			}
			break;
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 3.101329E-34f))
			{
				func_280(uParam0, 15, 1, -2, 0);
			}
			break;
		case 3:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 3.101329E-34f))
			{
				func_280(uParam0, 16, 1, -2, 0);
			}
			break;
		case 2:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 3.101329E-34f))
			{
				func_280(uParam0, 17, 1, -2, 0);
			}
			break;
		case 4:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 3.101329E-34f))
			{
				func_280(uParam0, 18, 1, -2, 0);
			}
			break;
		case 5:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 3.101329E-34f))
			{
				func_280(uParam0, 19, 1, -2, 0);
			}
			break;
		case 6:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 3.101329E-34f))
			{
				func_280(uParam0, 20, 1, -2, 0);
			}
			break;
		case 7:
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 3.101329E-34f))
			{
				func_280(uParam0, 21, 1, -2, 0);
			}
			break;
	}
}

void func_287(var uParam0, char* sParam1)
{
	if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3, sParam1))
	{
		uParam0->f_3 = sParam1;
		AUDIO::_SET_AUDIO_SCENESET(uParam0->f_3, uParam0->f_1);
	}
}

void func_288(var uParam0)
{
	if (func_34(uParam0, 32))
	{
		return;
	}
	if (func_230("BOB_FISHING_START", 0, 0))
	{
		func_35(uParam0, 32);
	}
}

void func_289(var uParam0)
{
	if (!func_182(2))
	{
		if (func_308(16, 1) || func_409(uParam0))
		{
			func_93(&(uParam0->f_157));
			func_410(2);
		}
	}
}

void func_290(var uParam0, var uParam1)
{
	if (func_56(uParam1, 2))
	{
		return;
	}
	func_301(uParam1, 2);
	func_227(uParam0, uParam1);
	func_8(uParam1);
	func_114(uParam1, 1);
	uParam1->f_155++;
	func_47(uParam0);
	func_411(&(uParam0->f_82), 39, 30);
	if (ENTITY::DOES_ENTITY_EXIST(func_138()))
	{
		ENTITY::_0x978AA2323ED32209(func_138(), 0.1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_141()))
	{
		ENTITY::_0x978AA2323ED32209(func_141(), 0.1f);
	}
}

void func_291(var uParam0)
{
	if ((!func_56(uParam0, 512) && func_51(&(uParam0->f_169))) && func_412(&(uParam0->f_169)) < 6f)
	{
		uParam0->f_168 = 2f;
	}
	else
	{
		uParam0->f_168 = 1f;
	}
}

void func_292(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_182(2))
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = iVar0;
		switch (uParam1->f_93[iVar0])
		{
			case 0:
				if (func_413(uParam0, uParam1, iVar1))
				{
					func_232(uParam1, iVar1, 1);
					func_93(&(uParam1->f_109[iVar0 /*3*/]));
				}
				else
				{
					func_231(uParam1, iVar1);
				}
				break;
			case 1:
				if (func_414(uParam0, uParam1, iVar1))
				{
					func_231(uParam1, iVar1);
					func_232(uParam1, iVar1, 0);
					func_93(&(uParam1->f_109[iVar0 /*3*/]));
				}
				else
				{
					func_415(uParam0, uParam1, iVar1);
				}
				break;
			case 2:
				func_231(uParam1, iVar1);
				break;
		}
		iVar0++;
	}
}

bool func_293()
{
	if (func_46())
	{
		return true;
	}
	return false;
}

int func_294(var uParam0)
{
	if (!func_51(&(uParam0->f_73)) || func_161(&(uParam0->f_73)) < 3f)
	{
		return 0;
	}
	if (func_213(Global_38.f_5811))
	{
		if (func_219(Global_38.f_5811) || func_220(Global_38.f_5811))
		{
			return 1;
		}
	}
	return 0;
}

void func_295(var uParam0, int iParam1)
{
	if (!PAD::IS_CONTROL_PRESSED(0, -1.684686E+34f))
	{
		func_282(uParam0, 0, 0, 1);
		func_416(uParam0, 0, iParam1);
		if (!func_51(&(uParam0->f_73)))
		{
			func_93(&(uParam0->f_73));
		}
	}
	else
	{
		func_416(uParam0, 0, iParam1);
		func_132(uParam0, 0);
		func_53(&(uParam0->f_73));
	}
}

void func_296(var uParam0, var uParam1)
{
	if (uParam1->f_54 == 0 || uParam1->f_54 == 1)
	{
		func_282(uParam0, 2, 0, 1);
	}
	else
	{
		func_132(uParam0, 2);
	}
}

void func_297(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	float fVar12;

	if ((((((func_293() || (Global_1902818.f_5 == 6 && !func_182(2))) || (Global_1902818.f_5 == 6 && !PAD::IS_CONTROL_PRESSED(0, -1.684686E+34f))) || (Global_1902818.f_5 == 10 && !func_182(2))) || (Global_1902818.f_5 == 10 && !PAD::IS_CONTROL_PRESSED(0, -1.684686E+34f))) || PAD::HAVE_CONTROLS_CHANGED(0)) || uParam0->f_528 != TASK::_0x5952DFA38FA529FE())
	{
		func_132(uParam0, 3);
		func_53(&(uParam0->f_76));
		uParam0->f_528 = TASK::_0x5952DFA38FA529FE();
		return;
	}
	if (!HUD::_UI_PROMPT_IS_VALID(uParam0->f_70))
	{
		iVar0 = 0;
		if (Global_1902818.f_5 == 6)
		{
			if (func_219(Global_38.f_5811) || func_220(Global_38.f_5811))
			{
				iVar0 = 1;
			}
		}
		func_282(uParam0, 3, iVar0, 1);
	}
	if (!HUD::_UI_PROMPT_IS_VALID(uParam0->f_70))
	{
		return;
	}
	fVar1 = 0f;
	if (Global_1902818.f_5.f_4 != 0f)
	{
		func_416(uParam0, 3, 0);
		func_53(&(uParam0->f_76));
		fVar1 = Global_1902818.f_5.f_4;
	}
	else if (Global_1902818.f_5 == 6 || Global_1902818.f_5 == 10)
	{
		if (uParam1->f_54 != 0)
		{
			if (func_417(uParam0))
			{
				func_416(uParam0, 3, 1);
			}
			else
			{
				func_416(uParam0, 3, 0);
			}
		}
		else
		{
			func_416(uParam0, 3, 0);
		}
	}
	else
	{
		iVar2 = func_77(uParam1);
		if (func_126(iVar2) && !func_81(uParam2, iVar2))
		{
			if (func_418(uParam0))
			{
				func_416(uParam0, 3, 1);
			}
			else
			{
				func_416(uParam0, 3, 0);
			}
		}
		else
		{
			func_416(uParam0, 3, 0);
			func_53(&(uParam0->f_76));
		}
	}
	fVar1 = func_183(fVar1, -1f, 1f);
	if (fVar1 > 0f)
	{
		fVar3 = PAD::GET_CONTROL_NORMAL(2, 7.1436E+09f);
		fVar4 = PAD::GET_CONTROL_NORMAL(2, -9.812416E-26f);
		vVar5 = { func_419(fVar3, fVar4, 0f) };
		vVar8 = { 0f, -1f, 0f };
		fVar11 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar5.x, vVar5.y, vVar8.x, vVar8.y);
		fVar12 = (fVar11 / 1135869952);
		if (fVar3 < 0f)
		{
			fVar12 = (1f - fVar12);
		}
		fVar12 = func_183(fVar12, 0f, 1f);
		fVar12 = (fVar12 + 1056964608);
		if (fVar12 > 1f)
		{
			fVar12 = (fVar12 - 1f);
		}
		if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
		{
			HUD::_UI_PROMPT_SET_SPINNER_POSITION(uParam0->f_70, fVar12);
		}
	}
}

void func_298(var uParam0, var uParam1)
{
	if ((Global_1902818.f_5 == 6 && !func_56(uParam1, 4096)) && func_213(Global_38.f_5811))
	{
		if (uParam1->f_54 == 1)
		{
			func_280(uParam0, 30, 1, func_420(uParam0), 1);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0) && PLAYER::_0xF4CB347D7B5EB0FD())
			{
				if (TASK::_0x5952DFA38FA529FE())
				{
					func_280(uParam0, 34, 0, -2, 1);
				}
				else
				{
					func_280(uParam0, 33, 0, -2, 1);
				}
			}
			else if (TASK::_0x5952DFA38FA529FE())
			{
				func_280(uParam0, 32, 0, -2, 1);
			}
			else
			{
				func_280(uParam0, 31, 0, -2, 1);
			}
			func_280(uParam0, 37, 0, -2, 1);
			func_280(uParam0, 39, 0, -2, 1);
		}
		else
		{
			func_280(uParam0, 30, 1, func_420(uParam0), 1);
			func_280(uParam0, 37, 0, -2, 1);
			func_280(uParam0, 39, 0, -2, 1);
		}
	}
}

void func_299(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_77(uParam1);
	if ((!func_126(iVar0) && func_213(Global_38.f_5811)) && !func_293())
	{
		func_421(uParam0, uParam1, uParam2);
	}
	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		if (!func_422(uParam0, uParam1, uParam2))
		{
			func_423(uParam0, uParam1, uParam2);
		}
		else
		{
			func_228(512);
			if (uParam1->f_163 == 1)
			{
				func_23(uParam1);
				if (func_51(&(uParam1->f_160)) && func_52(&(uParam1->f_160)) > uParam1->f_166)
				{
					func_229(uParam0, uParam1, uParam2, 0);
				}
				else
				{
					func_229(uParam0, uParam1, uParam2, 2);
				}
			}
			func_416(uParam0, 2, 0);
			func_424(uParam0, 2, 0);
			func_111(uParam0, uParam1, uParam2, 1, 0);
			uParam1->f_156 = 0;
			uParam1->f_55++;
			func_425(uParam0, uParam1, 1, 0);
		}
	}
}

bool func_300(var uParam0, var uParam1)
{
	if (func_56(uParam1, 4096))
	{
		return true;
	}
	else if (func_322(128))
	{
		return true;
	}
	else if (func_426(uParam0, uParam1))
	{
		return true;
	}
	else if (uParam1->f_54 == 0 && !func_213(Global_38.f_5811))
	{
		return true;
	}
	else if (func_427())
	{
		return true;
	}
	else if (func_182(8))
	{
		return true;
	}
	return false;
}

void func_301(var uParam0, int iParam1)
{
	if (!func_56(uParam0, iParam1))
	{
		func_123(&(uParam0->f_1), iParam1);
	}
}

void func_302(int iParam0)
{
	if (func_182(iParam0))
	{
		func_133(&(Global_1902818.f_2), iParam0);
	}
}

bool func_303(var uParam0, var uParam1, var uParam2)
{
	if (func_213(Global_38.f_5811))
	{
		if (func_408(uParam0->f_60[2], 1) || func_308(1, 1))
		{
			if (func_428(uParam0, uParam1, uParam2))
			{
				func_429(uParam0, uParam1, uParam2, func_77(uParam1));
				func_47(uParam0);
				func_287(uParam0, uParam0->f_7);
				return true;
			}
			else if (func_430(uParam1))
			{
				func_111(uParam0, uParam1, uParam2, 1, 0);
				if (uParam1->f_163 == 1)
				{
					func_280(uParam0, 41, 1, -2, 1);
				}
				else
				{
					func_280(uParam0, 42, 1, -2, 1);
				}
				uParam1->f_55++;
				func_425(uParam0, uParam1, 1, 0);
				func_180(1, 1);
				return true;
			}
		}
	}
	return false;
}

void func_304(var uParam0)
{
	if (!func_56(uParam0, 256))
	{
		if (func_308(1, 1))
		{
			func_301(uParam0, 256);
			if (func_51(&(uParam0->f_169)) && func_161(&(uParam0->f_169)) < 1092616192)
			{
				func_301(uParam0, 512);
			}
			else
			{
				func_96(uParam0, 512);
			}
			func_93(&(uParam0->f_169));
		}
		else if ((func_56(uParam0, 512) && func_51(&(uParam0->f_169))) && func_161(&(uParam0->f_169)) > 1092616192)
		{
			func_96(uParam0, 512);
		}
	}
	else if (!func_308(1, 0))
	{
		func_96(uParam0, 256);
	}
}

bool func_305(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		func_431(uParam0, uParam1, uParam2, iVar0);
		func_432(uParam0, uParam1, uParam2, iVar0);
		func_433(uParam1);
	}
	else
	{
		uParam1->f_174 = 0;
		uParam1->f_173 = 0;
		uParam1->f_172 = 0;
	}
	if (func_434(uParam0, uParam1, uParam2, iVar0))
	{
		return true;
	}
	return false;
}

void func_306(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (func_56(uParam1, 524288))
	{
		return;
	}
	func_301(uParam1, 524288);
	func_47(uParam0);
	WATER::_0xA33F5069B0CB89B8();
	func_435();
	func_251();
	uParam1->f_56++;
	iVar0 = 0;
	iVar1 = func_77(uParam1);
	if (!func_126(iVar1) || ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar1]))
	{
		iVar0 = 1;
	}
	func_425(uParam0, uParam1, 2, iVar0);
	func_111(uParam0, uParam1, uParam2, 0, 1);
}

void func_307(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_77(uParam1);
	if (func_126(iVar1))
	{
		if (func_81(uParam2, iVar1))
		{
			func_278(&(uParam0->f_82), 46, iVar0);
			func_278(&(uParam0->f_82), 47, iVar0);
			if (func_51(&(uParam1->f_182)) && func_52(&(uParam1->f_182)) < 4000)
			{
				if (uParam1->f_177 <= 1)
				{
					func_280(uParam0, 43, 1, 10000, 1);
				}
				else
				{
					func_280(uParam0, 45, 0, 10000, 1);
				}
			}
		}
		else
		{
			func_278(&(uParam0->f_82), 43, iVar0);
			func_278(&(uParam0->f_82), 45, iVar0);
			if (uParam1->f_178 > 0)
			{
				if (TASK::_0x5952DFA38FA529FE())
				{
					func_280(uParam0, 47, 1, 10000, 1);
				}
				else
				{
					func_280(uParam0, 46, 1, 10000, 1);
				}
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0) && !TASK::_0x5952DFA38FA529FE())
				{
					func_280(uParam0, 72, 0, 10000, 1);
				}
			}
		}
	}
	else
	{
		func_278(&(uParam0->f_82), 43, iVar0);
		func_278(&(uParam0->f_82), 45, iVar0);
		func_278(&(uParam0->f_82), 46, iVar0);
		func_278(&(uParam0->f_82), 47, iVar0);
		func_278(&(uParam0->f_82), 72, iVar0);
	}
}

bool func_308(int iParam0, int iParam1)
{
	if (func_122(Global_1902818.f_5.f_5, iParam0))
	{
		if (iParam1 == 1)
		{
		}
		return true;
	}
	return false;
}

void func_309(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 131072))
	{
		return;
	}
	func_301(uParam1, 131072);
	func_436(uParam0, uParam1, uParam2);
	iVar0 = func_77(uParam1);
	if (func_126(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0]))
		{
			PED::_SET_PED_CULL_RANGE(uParam2->f_123[iVar0], 75f, 75f);
		}
		func_21(uParam1, uParam2, iVar0, 0, 0);
	}
	if (!func_48(16))
	{
		func_280(uParam0, 55, 1, -2, 1);
	}
}

void func_310(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_56(uParam1, 8))
	{
		return;
	}
	func_301(uParam1, 8);
	iVar0 = func_77(uParam1);
	if (!func_126(iVar0))
	{
	}
	else
	{
		Global_1902818.f_52 = Global_1902818.f_38;
		Global_1902818.f_53 = ENTITY::GET_ENTITY_MODEL(uParam2->f_123[iVar0]);
		func_145(uParam2, iVar0, 9);
		uParam0->f_59 = 1;
		iVar1 = func_437(uParam1);
		bVar2 = func_438(uParam2->f_247[iVar0], iVar1);
		if (func_439(bVar2) && uParam2->f_309[iVar0] != 4)
		{
			uParam0->f_59 = 0;
		}
	}
	func_47(uParam0);
	WATER::_0xA33F5069B0CB89B8();
	func_278(&(uParam0->f_82), 43, 0);
	func_278(&(uParam0->f_82), 45, 0);
	func_278(&(uParam0->f_82), 46, 0);
	func_278(&(uParam0->f_82), 47, 0);
	func_278(&(uParam0->f_82), 72, 0);
	func_278(&(uParam0->f_82), 49, 0);
	func_287(uParam0, uParam0->f_9);
	func_22(uParam1);
	func_440(uParam1);
	func_228(64);
	func_228(32);
	if (func_51(&(uParam1->f_219)))
	{
		if (!func_135(&(uParam1->f_219)))
		{
			func_260(&(uParam1->f_219));
		}
	}
}

void func_311(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	if (func_56(uParam0, 65536))
	{
		return;
	}
	iVar0 = func_77(uParam0);
	Global_1902818.f_40++;
	Global_1902818.f_39++;
	if (func_441(Global_38.f_5811))
	{
		fVar1 = -1.100999E-17f;
	}
	else if (func_442(Global_38.f_5811))
	{
		fVar1 = -1.156934E+07f;
	}
	else if (func_219(Global_38.f_5811))
	{
		fVar1 = 0.01400942f;
	}
	else if (func_220(Global_38.f_5811))
	{
		fVar1 = 5.267768E-12f;
	}
	if (func_443(Global_1902818.f_37))
	{
		fVar2 = -2.336031E+31f;
	}
	else
	{
		fVar2 = -4.824814E+07f;
	}
	if (func_126(iVar0))
	{
		iVar3 = uParam1->f_123[iVar0];
		STATS::_STAT_ITEM_FISH_CAUGHT(iVar3, Global_1902818.f_38, fVar1, fVar2);
		COMPENDIUM::COMPENDIUM_FISH_CAUGHT(iVar3, Global_38.f_5811);
	}
	func_301(uParam0, 65536);
	func_410(64);
}

void func_312(var uParam0, var uParam1)
{
	if (func_56(uParam1, 262144))
	{
		return;
	}
	func_425(uParam0, uParam1, 3, 0);
	func_301(uParam1, 262144);
}

void func_313(var uParam0, int iParam1)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;

	bVar0 = HUD::IS_PAUSE_MENU_ACTIVE();
	if (uParam0->f_2 == 1)
	{
		if (bVar0 == 1)
		{
			func_20(uParam0);
		}
		return;
	}
	if (bVar0 == 1)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		if (!func_61(Global_1902818.f_37))
		{
			func_20(uParam0);
			return;
		}
		if (iParam1 == 1)
		{
			sVar1 = MISC::VAR_STRING(38, "MGFSH_CAUGHT_POI", Global_1902818.f_38, func_402(Global_1902818.f_37));
		}
		else
		{
			sVar1 = MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", Global_1902818.f_38, func_402(Global_1902818.f_37));
		}
		sVar2 = func_444(Global_1902818.f_37);
		uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(3.887769E+08f);
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "InfoBox");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_4, "isVisible", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "itemLabel", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "itemDescription", sVar2);
		*uParam0 = 1;
	}
	if ((((*uParam0 == 1 && uParam0->f_1 == 0) && UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3)) && UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, -6.292886E-21f)) && UISTATEMACHINE::UI_STATE_MACHINE_CREATE(-2.279722E-08f, uParam0->f_3))
	{
		uParam0->f_1 = 1;
		uParam0->f_2 = 1;
	}
}

void func_314(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 64) || func_56(uParam1, 32))
	{
		return;
	}
	func_301(uParam1, 64);
	if (func_182(4))
	{
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			uParam2->f_371[iVar0] = 1;
		}
	}
	func_445(uParam1, uParam2);
	func_20(&(uParam0->f_19));
	Global_1902818.f_43++;
	Global_1902818.f_44++;
	func_110(uParam1);
	func_301(uParam1, 128);
	func_180(64, 1);
}

void func_315(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 64) || func_56(uParam1, 32))
	{
		return;
	}
	iVar0 = func_77(uParam1);
	if (!func_293())
	{
		func_282(uParam0, 5, 0, 1);
		if (func_126(iVar0))
		{
			if (func_446(uParam2, iVar0))
			{
				func_282(uParam0, 6, 0, uParam0->f_59);
				if (uParam0->f_59 == 0)
				{
					func_280(uParam0, 58, 1, -2, 1);
				}
			}
		}
		if (func_234(uParam0->f_60[5]) && func_408(uParam0->f_60[5], 1))
		{
			func_314(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if ((func_234(uParam0->f_60[6]) && func_447(uParam0->f_60[6], 0)) && func_408(uParam0->f_60[6], 1))
		{
			func_436(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
		}
		else if (func_182(32))
		{
			func_436(uParam0, uParam1, uParam2);
			func_132(uParam0, 5);
			func_132(uParam0, 6);
			func_302(32);
		}
	}
}

void func_316(var uParam0)
{
	if ((GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_18) && func_51(&(uParam0->f_20))) && func_52(&(uParam0->f_20)) > 100)
	{
		func_93(&(uParam0->f_20));
		uParam0->f_19 = (uParam0->f_19 + 1008981770);
		if (uParam0->f_19 > 1f)
		{
			func_110(uParam0);
		}
		else
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_18, "fade", uParam0->f_19, false);
		}
	}
}

void func_317(var uParam0)
{
	if (func_56(uParam0, 16))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -9.039255E-32f))
	{
		func_301(uParam0, 16);
		if (ENTITY::DOES_ENTITY_EXIST(func_138()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(func_138()))
			{
				ENTITY::DETACH_ENTITY(func_138(), true, true);
				PHYSICS::ACTIVATE_PHYSICS(func_138());
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_141()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(func_141()))
			{
				ENTITY::DETACH_ENTITY(func_141(), true, true);
				PHYSICS::ACTIVATE_PHYSICS(func_141());
			}
		}
	}
}

void func_318(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 131072))
	{
		return;
	}
	if (func_308(64, 1))
	{
		func_301(uParam1, 131072);
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			func_21(uParam1, uParam2, iVar0, 1, 1);
		}
	}
	else if (func_308(256, 1))
	{
		func_309(uParam0, uParam1, uParam2);
	}
	else if (func_308(128, 1))
	{
		func_301(uParam1, 131072);
	}
}

void func_319()
{
	if (!func_182(4) && func_308(1024, 1))
	{
		func_410(4);
	}
}

void func_320(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_56(uParam1, 4))
	{
		return;
	}
	if (func_308(512, 1))
	{
		func_301(uParam1, 4);
		iVar0 = func_77(uParam1);
		if (func_126(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(uParam2->f_123[iVar0], true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iVar0], false);
			PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iVar0], 17, false);
		}
		func_111(uParam0, uParam1, uParam2, 0, 0);
	}
}

void func_321(var uParam0)
{
	if (Global_38.f_5811 == 2.173288E+11f)
	{
		func_280(uParam0, 59, 1, -2, 1);
	}
	else if (Global_38.f_5811 == 0.6467319f)
	{
		func_280(uParam0, 60, 1, -2, 1);
	}
	else if (Global_38.f_5811 == 2.089274E-21f)
	{
		func_280(uParam0, 61, 1, -2, 1);
	}
	else if (Global_38.f_5811 == -1.072744E-16f)
	{
		func_280(uParam0, 62, 1, -2, 1);
	}
	else if (Global_38.f_5811 == -7.975852E-25f)
	{
		func_280(uParam0, 63, 1, -2, 1);
	}
	else if (Global_38.f_5811 == 1.422386E-33f)
	{
		func_280(uParam0, 64, 1, -2, 1);
	}
	else if (Global_38.f_5811 == -5710.982f)
	{
		func_280(uParam0, 65, 1, -2, 1);
	}
	else if (Global_38.f_5811 == 1.441069E+37f)
	{
		func_280(uParam0, 66, 1, -2, 1);
	}
	else if (Global_38.f_5811 == -3.968113E-35f)
	{
		func_280(uParam0, 67, 1, -2, 1);
	}
	else if (Global_38.f_5811 == 8.997693E+26f)
	{
		func_280(uParam0, 68, 1, -2, 1);
	}
	else if (Global_38.f_5811 == 4.412607E+09f)
	{
		func_280(uParam0, 69, 1, -2, 1);
	}
	else if (Global_38.f_5811 == 0.4557617f)
	{
		func_280(uParam0, 70, 1, -2, 1);
	}
	else if (Global_38.f_5811 == -1.203225E-30f)
	{
		func_280(uParam0, 71, 1, -2, 1);
	}
}

bool func_322(int iParam0)
{
	return func_122(Global_1902818.f_5.f_6, iParam0);
}

void func_323(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = func_364(iParam1);
	if (func_365(iVar0) && !FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_31[iParam1]))
	{
		uParam0->f_31[iParam1] = FLOCK::_0xE93415B3307208E5(iVar0, uParam0->f_12, 0f, fParam2, 1176256512 /* Float: 10000f */, 0f, 0f, 0f, 1);
	}
}

void func_324(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_364(iParam1);
	if (func_365(iVar0) && FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_31[iParam1]))
	{
		FLOCK::_0xC3D581A34BC0A1F0(iVar0, uParam0->f_31[iParam1]);
	}
}

bool func_325()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_448())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939089.f_75.f_55))
	{
		return false;
	}
	if (func_449(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_326(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
	{
		sVar0 = func_450(Global_1893611.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_452(func_451(Global_34));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_453(iParam0) || func_454(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_327(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_328(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_329(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_331(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	var uVar3;

	if (!func_327(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_38.f_198[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_455(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var1, &uVar3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1072759.f_21262[iVar0 /*12*/] = uVar3;
		iVar0++;
	}
	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_334(int iParam0, int iParam1)
{
	if (!func_456(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_271[iParam0] && iParam1) != 0;
	}
	return (Global_1072759.f_21335[iParam0] && iParam1) != 0;
}

bool func_335(int iParam0, int iParam1)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1) != 0;
}

bool func_336(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && fParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && fParam1) != 0;
}

int func_337()
{
	return Global_1902565;
}

int func_338(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_339(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_340(float fParam0)
{
	return ((fParam0 * 1072064102) + 1107296256);
}

int func_341(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	int iVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	iVar16 = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&Var0, &vVar13, bParam6, bParam7);
	return iVar16;
}

void func_342(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_343(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_344(bool bParam0)
{
	if (func_200() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_345(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_346(bool bParam0)
{
	vector3 vVar0;

	if (!func_345(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_347(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_345(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_360(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_457("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_458(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_459(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_460(iVar1);
				return true;
			}
			iVar3++;
		}
		func_460(iVar1);
	}
	return false;
}

bool func_348(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_345(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_461(bParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_462(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_463(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_464(bParam0);
	iVar2 = func_463(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_349(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_465(iParam2, -3.005759E+25f);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_466(uParam1, bParam0, Var3);
	return 1;
}

struct<5> func_350(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_467(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_346(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_351(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_468(bParam1) };
			if (bParam2 && func_469(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_470(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_470(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_471(bParam0, &Var6, 6.282013E+23f))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else
				{
					Var0.f_4 = -3.587391E+15f;
				}
			}
			else
			{
				Var0.f_4 = 6.282013E+23f;
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 5.573986E+25f;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -5.45926E-19f;
			Var0 = { func_472(bParam1) };
			switch (func_461(bParam0))
			{
				case -1070622585:
					Var0.f_4 = NaNf;
					break;
				case -1057349201:
					Var0.f_4 = 4.57813E+14f;
					break;
				case 874188557:
					Var0.f_4 = -1.48142E+30f;
					break;
				case -2101244071:
					Var0.f_4 = -1.644837E+29f;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_473(bParam0, -2.580501E-27f))
			{
				Var0 = { func_351(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_473(bParam0, -4.220332E-15f))
			{
				Var0 = { func_351(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_351(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_473(bParam0, -3.171238E-21f))
			{
				Var0 = { func_351(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.884954E+11f);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 4.978612f))
			{
				Var0.f_4 = 4.978612f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 0.08386164f))
			{
				Var0.f_4 = 0.08386164f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -8.915019E+08f))
			{
				Var28.f_9 = -5.45926E-19f;
				if (!func_474(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -8.915019E+08f;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.194466E+13f))
			{
				Var0.f_4 = -1.194466E+13f;
			}
			else if (func_473(bParam0, -3.171238E-21f))
			{
				Var0 = { func_351(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.884954E+11f);
			}
			else
			{
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.982335E+09f);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_351(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_345(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_344(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

void func_352(var uParam0, int iParam1)
{
	if ((func_441(iParam1) || func_442(iParam1)) || iParam1 == 6.236711E+08f)
	{
		uParam0->f_54 = 0;
	}
	else
	{
		uParam0->f_54 = 1;
	}
}

int func_353(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (uParam0->f_54 == 0)
	{
		iVar0 = 0;
	}
	return iVar0;
}

char* func_354(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_BREAD"):
			return "p_baitBread01x";
		case joaat("UPGRADE_FSH_BAIT_CORN"):
			return "p_baitCorn01x";
		case joaat("UPGRADE_FSH_BAIT_CHEESE"):
			return "p_baitCheese01x";
		case joaat("UPGRADE_FSH_BAIT_WORM"):
			return "p_baitWorm01x";
		case joaat("UPGRADE_FSH_BAIT_CRICKET"):
			return "p_baitCricket01x";
		case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
			return "P_CRAWDAD01X";
		case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
			return "p_finishedragonfly01x";
		case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
			return "p_FinisdFishlure01x";
		case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
			return "p_finishdcrawd01x";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
			return "P_FINISHEDRAGONFLYLEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
			return "P_FINISDFISHLURELEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
			return "P_FINISHDCRAWDLEGENDARY01X";
		case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
			return "P_LGOC_SPINNER_V4";
		case 1309979101: /* GXTEntry: "No Bait" */
			return "P_FISHHOOK02X";
		default:
			break;
	}
	return "P_FISHHOOK02X";
}

void func_355(var uParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;
	int iVar10;
	struct<5> Var11;
	struct<4> Var16;

	if (Global_38.f_5811 == 6.236711E+08f)
	{
		iVar0 = func_344(0);
		Var1 = { func_350(6.236711E+08f, 0, 0) };
		Var6 = { func_351(6.236711E+08f, Var1, Var1.f_4, 0) };
		if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_HIDDEN(iVar0, &Var6))
		{
			INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2(iVar0, &Var6, false);
		}
	}
	else
	{
		iVar10 = func_344(0);
		Var11 = { func_350(6.236711E+08f, 0, 0) };
		Var16 = { func_351(6.236711E+08f, Var11, Var11.f_4, 0) };
		if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_HIDDEN(iVar10, &Var16))
		{
			INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN_2(iVar10, &Var16, true);
		}
		uParam0->f_57 = Global_38.f_5811;
	}
}

void func_356()
{
	struct<2> Var0;
	int iVar2;

	Var0 = 0;
	iVar2 = 0;
	if (func_213(Global_38.f_5811) && func_210(Global_38.f_5811, 1))
	{
		iVar2 = Global_38.f_5811;
	}
	else if (Global_38.f_5811 == 6.236711E+08f)
	{
		iVar2 = 6.236711E+08f;
	}
	else if (func_210(0.6467319f, 1))
	{
		iVar2 = 0.6467319f;
	}
	else if (func_210(2.089274E-21f, 1))
	{
		iVar2 = 2.089274E-21f;
	}
	else if (func_210(2.173288E+11f, 1))
	{
		iVar2 = 2.173288E+11f;
	}
	if (iVar2 != 0)
	{
		Var0 = 2;
		switch (iVar2)
		{
			case joaat("UPGRADE_FSH_BAIT_BREAD"):
				Var0.f_1 = 0.6467319f;
				break;
			case joaat("UPGRADE_FSH_BAIT_CORN"):
				Var0.f_1 = 2.089274E-21f;
				break;
			case joaat("UPGRADE_FSH_BAIT_CHEESE"):
				Var0.f_1 = 2.173288E+11f;
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET"):
				Var0.f_1 = -7.975852E-25f;
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM"):
				Var0.f_1 = -1.072744E-16f;
				break;
			case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
				Var0.f_1 = 1.422386E-33f;
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
				Var0.f_1 = 1.441069E+37f;
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
				Var0.f_1 = -5710.982f;
				break;
			case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
				Var0.f_1 = -3.968113E-35f;
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
				Var0.f_1 = 4.412607E+09f;
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
				Var0.f_1 = 8.997693E+26f;
				break;
			case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
				Var0.f_1 = 0.4557617f;
				break;
			case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
				Var0.f_1 = -1.203225E-30f;
				break;
			case 1309979101: /* GXTEntry: "No Bait" */
				Var0.f_1 = 6.236711E+08f;
				break;
		}
		HUD::_0x8A59D44189AF2BC5(&Var0, 2.487742E+28f);
	}
}

void func_357(var uParam0)
{
	uParam0->f_49 = 0;
	if (uParam0->f_48 == -1)
	{
	}
	else if (uParam0->f_48 == 0)
	{
		uParam0->f_49 = func_475(Global_38.f_5811);
	}
	else if (uParam0->f_48 == 1)
	{
		uParam0->f_49 = func_476(Global_38.f_5811);
	}
	else if (uParam0->f_48 == 2)
	{
		uParam0->f_49 = func_477(Global_38.f_5811);
	}
}

bool func_358(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_345(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_478(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

char* func_359(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_360(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_345(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_346(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_479(bParam0, 9.811189E+11f))
	{
		func_480(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_361(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_481(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_482(&Var0, func_468(0));
	}
	if (!func_483(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_460(iVar18);
	return iVar19;
}

int func_362(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_485(func_484(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

struct<4> func_363(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_350(bParam0, bParam1, 0) };
	return func_351(bParam0, Var0, Var0.f_4, bParam1);
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -9.524182E-08f;
		case 1:
			return 8.507326E+12f;
		case 2:
			return 5.777719E-36f;
		case 3:
			return -0.0001415903f;
		case 4:
			return -0.000743642f;
		case 5:
			return 23812.29f;
		case 6:
			return 1.608631E+17f;
		case 7:
			return 3.47036E-12f;
		case 8:
			return 9.071953E+10f;
		case 9:
			return 0.0005977342f;
		case 10:
			return 1.116994E+18f;
		case 11:
			return 2.07316E+20f;
		case 12:
			return 1.702717E-23f;
		case 13:
			return -4.625853E-26f;
		case 14:
			return -1.903621E+09f;
		default:
			break;
	}
	return 0;
}

bool func_365(int iParam0)
{
	if ((((((((((((((iParam0 == -9.524182E-08f || iParam0 == 8.507326E+12f) || iParam0 == 5.777719E-36f) || iParam0 == -0.0001415903f) || iParam0 == -0.000743642f) || iParam0 == 23812.29f) || iParam0 == 1.608631E+17f) || iParam0 == 3.47036E-12f) || iParam0 == 9.071953E+10f) || iParam0 == 0.0005977342f) || iParam0 == 1.116994E+18f) || iParam0 == 2.07316E+20f) || iParam0 == -4.625853E-26f) || iParam0 == 1.702717E-23f) || iParam0 == -1.903621E+09f)
	{
		return true;
	}
	return false;
}

void func_366(int iParam0, float fParam1)
{
	char* sVar0;

	sVar0 = func_203(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DECORATOR::DECOR_SET_FLOAT(PLAYER::PLAYER_PED_ID(), sVar0, fParam1);
	}
}

int func_367(int iParam0)
{
	return iParam0;
}

void func_368(int iParam0)
{
	if (!func_486(iParam0))
	{
		return;
	}
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_DELETE(Global_1951897[iParam0 /*23*/].f_3);
	}
	Global_1951897[iParam0 /*23*/].f_4 = 0;
	Global_1951897[iParam0 /*23*/] = 1;
	Global_1951897[iParam0 /*23*/].f_16 = 0;
	Global_1951897[iParam0 /*23*/].f_1 = 0;
	Global_1951897[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_9 = 0f;
	Global_1951897[iParam0 /*23*/].f_10 = 0;
	Global_1951897[iParam0 /*23*/].f_11 = 0;
	Global_1951897[iParam0 /*23*/].f_2 = 1;
	Global_1951897[iParam0 /*23*/].f_15 = -1f;
}

int func_369()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = POPULATION::_GET_RANDOM_FISH_TYPE_FOR_LOCATION();
	iVar2 = func_246(iVar1);
	if (iVar2 != 15)
	{
		if ((((iVar2 == 3 || iVar2 == 4) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8)
		{
			return 15;
		}
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_370(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			return -7.823627E-38f;
		case 1:
			return 2.350962E+15f;
		case 2:
			return 1.880478E-29f;
		case 3:
			return 9.844682E+16f;
		case 4:
			return -1.122826E+28f;
		case 5:
			return 1.572265E-34f;
		case 6:
			return -2.021815E+13f;
		case 7:
			return -1.247056E-17f;
		case 8:
			return 6.240494E-14f;
		case 9:
			return 1.386534E-13f;
		case 10:
			return 1.60476E-20f;
		case 11:
			return joaat("A_C_FISHROCKBASS_01_SM");
		case 12:
			return 3.562316E+28f;
		case 13:
			return 1.854381E-37f;
		case 14:
			return 2.425197E-21f;
		default:
			break;
	}
	return iVar0;
}

int func_371(var uParam0, vector3 vParam1)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), vParam1) };
	if ((vVar0.x < uParam0->f_27[1 /*3*/] || vVar0.x > uParam0->f_27[4 /*3*/]) || vVar0.y > uParam0->f_27[2 /*3*/].f_1)
	{
		return 0;
	}
	return 1;
}

int func_372(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	vVar3 = { func_419(vParam0 - Global_34) };
	fVar6 = func_487(vVar0, vVar3);
	fVar7 = BUILTIN::COS(45f);
	if (fVar6 < fVar7)
	{
		return 0;
	}
	return 1;
}

float func_373(int iParam0)
{
	return FLOCK::_0x53187E563F938E76(iParam0);
}

void func_374(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_488(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_489(iParam0, 0);
			bVar0 = true;
		}
		func_490(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_375(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_491(iParam0);
	if (iParam1 == 1)
	{
		fVar1 = (fVar0 * 1048576000);
		if (func_492())
		{
			fVar0 = (fVar0 + fVar1);
		}
	}
	return fVar0;
}

float func_376(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_493(iParam0);
	if (iParam1 == 1)
	{
		fVar1 = (fVar0 * 1048576000);
		if (!func_492())
		{
			fVar0 = (fVar0 - fVar1);
		}
	}
	return fVar0;
}

float func_377(float fParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;

	iVar0 = BUILTIN::FLOOR(fParam0);
	fVar1 = (fParam0 - IntToFloat(iVar0));
	if (fVar1 < 1031798784)
	{
		fVar2 = (IntToFloat(iVar0) + 0f);
	}
	else if (fVar1 < 1040187392)
	{
		fVar2 = (IntToFloat(iVar0) + 1031798784);
	}
	else if (fVar1 < 1044381696)
	{
		fVar2 = (IntToFloat(iVar0) + 1040187392);
	}
	else if (fVar1 < 1048576000)
	{
		fVar2 = (IntToFloat(iVar0) + 1044381696);
	}
	else if (fVar1 < 1050673152)
	{
		fVar2 = (IntToFloat(iVar0) + 1048576000);
	}
	else if (fVar1 < 1052770304)
	{
		fVar2 = (IntToFloat(iVar0) + 1050673152);
	}
	else if (fVar1 < 1054867456)
	{
		fVar2 = (IntToFloat(iVar0) + 1052770304);
	}
	else if (fVar1 < 1056964608)
	{
		fVar2 = (IntToFloat(iVar0) + 1054867456);
	}
	else if (fVar1 < 1058013184)
	{
		fVar2 = (IntToFloat(iVar0) + 1056964608);
	}
	else if (fVar1 < 1059061760)
	{
		fVar2 = (IntToFloat(iVar0) + 1058013184);
	}
	else if (fVar1 < 1060110336)
	{
		fVar2 = (IntToFloat(iVar0) + 1059061760);
	}
	else if (fVar1 < 1061158912)
	{
		fVar2 = (IntToFloat(iVar0) + 1060110336);
	}
	else if (fVar1 < 1062207488)
	{
		fVar2 = (IntToFloat(iVar0) + 1061158912);
	}
	else if (fVar1 < 1063256064)
	{
		fVar2 = (IntToFloat(iVar0) + 1062207488);
	}
	else if (fVar1 < 1064304640)
	{
		fVar2 = (IntToFloat(iVar0) + 1063256064);
	}
	else
	{
		fVar2 = (IntToFloat(iVar0) + 1064304640);
	}
	return fVar2;
}

void func_378(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (iVar0 == func_494())
	{
		return;
	}
	PED::SET_LOOTING_FLAG(iVar0, 0, bParam1);
	PED::SET_LOOTING_FLAG(iVar0, 1, bParam1);
}

int func_379(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (uParam0->f_278[iParam1] / uParam0->f_470);
	iVar1 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(6000) * fVar0));
	iVar1 += 4000;
	return iVar1;
}

void func_380(var uParam0)
{
	if (uParam0->f_202 == 0f)
	{
		return;
	}
	uParam0->f_202 = (uParam0->f_202 * 1063675494);
	if (uParam0->f_202 < 981668463)
	{
		uParam0->f_202 = 0f;
	}
}

int func_381(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 30;
	if (uParam0->f_309[iParam1] == 4)
	{
		iVar0 = 20;
	}
	else if (uParam0->f_309[iParam1] == 2 || uParam0->f_309[iParam1] == 3)
	{
		iVar0 = 25;
	}
	return iVar0;
}

int func_382(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	fVar0 = (uParam0->f_278[iParam1] / uParam0->f_470);
	iVar1 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(-4000) * fVar0));
	iVar1 += 10000;
	return iVar1;
}

int func_383(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_BREAD"):
			return 1.684173E-30f;
		case joaat("UPGRADE_FSH_BAIT_CORN"):
			return -2.25928E-06f;
		case joaat("UPGRADE_FSH_BAIT_CHEESE"):
			return -1.887249E+28f;
		case joaat("UPGRADE_FSH_BAIT_WORM"):
			return 4.189193E-19f;
		case joaat("UPGRADE_FSH_BAIT_CRICKET"):
			return -1.751105E+28f;
		case joaat("UPGRADE_FSH_BAIT_CRAYFISH"):
			return -9.324165E+37f;
		case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
			return -1.307363E-34f;
		case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
			return 1.794495E+13f;
		case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
			return 1.081153E+27f;
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
			return -1.062835E-35f;
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
			return 4.575691E-13f;
		case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
			return -3.350677E-08f;
		case joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"):
			return -8.274715E-27f;
		default:
			break;
	}
	return 0;
}

float func_384(vector3 vParam0, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;

	iVar0 = 1;
	if (iParam3 == 1)
	{
		iVar0 = 0;
	}
	iVar4 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(func_140(vParam0, 10f), iVar0, &fVar2);
	bVar5 = MISC::GET_GROUND_Z_FOR_3D_COORD(func_140(vParam0, 10f), &fVar3, false);
	if ((iVar4 == 1 && bVar5 == 1) && fVar2 > fVar3)
	{
		fVar1 = (fVar2 - fVar3);
	}
	return fVar1;
}

bool func_385(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { func_271(vParam0, 1) };
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(PLAYER::PLAYER_PED_ID(), vVar0, 1))
	{
		return true;
	}
	return false;
}

void func_386(var uParam0, vector3 vParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_8, vParam1, true, false, true, true);
		func_93(&(uParam0->f_215));
	}
}

bool func_387(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_224 > 1)
	{
		if (func_131())
		{
			if (uParam0->f_222 != 1f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (func_393())
		{
			if (uParam0->f_222 != 1069547520)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (func_81(uParam1, iParam2))
		{
			if (uParam0->f_222 != 3f)
			{
				uParam0->f_223 = 1;
			}
		}
		else if (uParam0->f_222 != 1069547520)
		{
			uParam0->f_223 = 1;
		}
	}
	return uParam0->f_223;
}

float func_388(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

float func_389(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_495(vVar0, vVar3, iParam2);
}

bool func_390(int iParam0)
{
	if (Global_1902818.f_5.f_3 > 1056964608)
	{
		return false;
	}
	return iParam0 > 0;
}

bool func_391(int iParam0)
{
	if (Global_1902818.f_5.f_3 > 1056964608)
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_392(var uParam0, float fParam1, float fParam2)
{
	if (uParam0->f_200 == 2)
	{
		if (fParam1 >= (fParam2 / 3f))
		{
			return true;
		}
	}
	if (((uParam0->f_200 == 1 || uParam0->f_200 == 3) || uParam0->f_200 == 4) || uParam0->f_200 == 5)
	{
		if (fParam1 >= (fParam2 / 2f))
		{
			return true;
		}
	}
	return false;
}

bool func_393()
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0))
	{
		if (func_129() != 0 || func_130() != 0)
		{
			return true;
		}
	}
	else if (PAD::IS_CONTROL_PRESSED(0, -7.153274E-18f) && PAD::IS_CONTROL_PRESSED(0, 8.319475E-08f))
	{
		return true;
	}
	return false;
}

int func_394(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (AUDIO::_HAS_SOUND_ID_FINISHED(uParam0->f_70[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_395(var uParam0, var uParam1)
{
	int iVar0;

	if (func_56(uParam0, 32))
	{
		iVar0 = func_77(uParam0);
		if (func_126(iVar0) && uParam1->f_309[iVar0] != 4)
		{
			if (uParam1->f_154[iVar0] == 9)
			{
				func_21(uParam0, uParam1, iVar0, 1, 1);
			}
		}
	}
}

var func_396()
{
	return Global_1940072.f_10;
}

var func_397()
{
	return Global_1940072.f_11;
}

var func_398()
{
	return Global_1940072.f_13;
}

bool func_399(var uParam0, int iParam1)
{
	return uParam0->f_74[iParam1] == 1;
}

bool func_400(var uParam0, int iParam1)
{
	if ((uParam0->f_368[iParam1] > 0 && func_51(&(uParam0->f_148[iParam1 /*3*/]))) && func_161(&(uParam0->f_148[iParam1 /*3*/])) < IntToFloat(uParam0->f_368[iParam1]))
	{
		return true;
	}
	return false;
}

char* func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MGFSH_EQ_ROD1";
		case 1:
			return "MGFSH_EQ_ROD2";
		case 2:
			return "MGFSH_EQ_ROD3";
		case 3:
			return "MGFSH_EQ_BAIT1";
		case 4:
			return "MGFSH_EQ_BAIT2_ABI1";
		case 5:
			return "MGFSH_EQ_BAIT2_FUD1";
		case 6:
			return "MGFSH_EQ_BAIT2_WAR1";
		case 7:
			return "MGFSH_EQ_BAIT2_FSH1";
		case 8:
			return "MGFSH_EQ_BAIT3_ABI1";
		case 9:
			return "MGFSH_EQ_BAIT3_FUD1";
		case 10:
			return "MGFSH_EQ_BAIT3_WAR1";
		case 11:
			return "MGFSH_EQ_BAIT3_FSH1";
		case 12:
			return "MGFSH_EQ_REBAIT";
		case 13:
			return "MGFSH_EQ_BAIT1";
		case 14:
			return "MGFSH_EQ_BAIT_ANY";
		case 15:
			return "MGFSH_CAST_DEEP";
		case 16:
			return "MGFSH_CAST_HIGH";
		case 17:
			return "MGFSH_CAST_WATER";
		case 18:
			return "MGFSH_CAST_CLOSE";
		case 19:
			return "MGFSH_CAST_LOS";
		case 20:
			return "MGFSH_CAST_BAIT";
		case 21:
			return "MGFSH_CAST_NOT_HERE";
		case 22:
			return "MGFSH_BEGIN_AIM_HLP";
		case 23:
			return "MGFSH_BEGIN_AIM_TOG_HLP";
		case 24:
			return "MGFSH_BEGIN_AIM_OBJ";
		case 25:
			return "MGFSH_CAST_AIMING_HLP";
		case 26:
			return "MGFSH_CAST_AIMING_OBJ";
		case 27:
			return "MGFSH_CAST_RELEASE_HLP";
		case 28:
			return "MGFSH_CAST_RELEASE_OBJ";
		case 29:
			return "MGFSH_CAST_POWER";
		case 30:
			return "MGFSH_NIBBLE_DESC";
		case 31:
			return "MGFSH_WAIT_LURE_HLP";
		case 32:
			return "MGFSH_WAIT_LURE_AUTO_HLP";
		case 33:
			return "MGFSH_WAIT_LURE_TOG_HLP";
		case 34:
			return "MGFSH_WAIT_LURE_TOG_AUTO_HLP";
		case 35:
			return "MGFSH_WAIT_LURE_GRIP";
		case 36:
			return "MGFSH_WAIT_LURE_HOOK";
		case 37:
			return "MGFSH_HOOK_FISH_HLP";
		case 38:
			return "MGFSH_HOOK_FISH_OBJ";
		case 39:
			return "MGFSH_FLICK_BAIT";
		case 40:
			return "MGFSH_SPOOL_EMPTY";
		case 41:
			return "MGFSH_MISSED_BITE1";
		case 42:
			return "MGFSH_MISSED_BITE2";
		case 43:
			return "MGFSH_HOOK_ROD1_HLP";
		case 44:
			return "MGFSH_HOOK_ROD1_OBJ";
		case 45:
			return "MGFSH_HOOK_ROD2";
		case 46:
			return "MGFSH_REEL_FISH_HLP";
		case 47:
			return "MGFSH_REEL_FISH_AUTO_HLP";
		case 48:
			return "MGFSH_REEL_FISH_OBJ";
		case 49:
			return "MGFSH_OBJECT_REEL";
		case 50:
			return "MGFSH_FISH_ESC1";
		case 51:
			return "MGFSH_FISH_ESC2";
		case 52:
			return "MGFSH_FISH_ESC3";
		case 53:
			return "MGFSH_FISH_ESC4";
		case 54:
			return "MGFSH_BAIT_LOST";
		case 55:
			return "MGFSH_STOW_HORSE";
		case 56:
			return "MGFSH_HOLD_REEL";
		case 57:
			return "MGFSH_PUMP_ROD";
		case 58:
			return "MGFSH_FULL_SAT";
		case 59:
			return "MGFSH_EQD_CHEESE";
		case 60:
			return "MGFSH_EQD_BREAD";
		case 61:
			return "MGFSH_EQD_CORN";
		case 62:
			return "MGFSH_EQD_WORM";
		case 63:
			return "MGFSH_EQD_CRICKET";
		case 64:
			return "MGFSH_EQD_CRAYFISH";
		case 65:
			return "MGFSH_EQD_LURE_LAKE";
		case 66:
			return "MGFSH_EQD_LURE_RIVER";
		case 67:
			return "MGFSH_EQD_LURE_SWAMP";
		case 68:
			return "MGFSH_EQD_LURE_LAKE";
		case 69:
			return "MGFSH_EQD_LURE_RIVER";
		case 70:
			return "MGFSH_EQD_LURE_SWAMP";
		case 71:
			return "MGFSH_EQD_SPECIAL_SPINNER_MP";
		case 72:
			return "MGFSH_REEL_FISH_HLP2_KM";
		default:
			break;
	}
	return "";
}

char* func_402(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "";
}

int func_403(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar15 = UIFEED::_UI_FEED_POST_HELP_TEXT(&Var0, &Var13, bParam5);
	return iVar15;
}

int func_404(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_496(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_497(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, fParam8, bParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_405(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_234(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_MANUAL_RESOLVED(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

void func_406(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_234(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (bParam1)
	{
		func_498(iParam0, 4);
		if (bParam3)
		{
			func_499(iVar0, 1);
		}
		func_500(iVar0, 1);
	}
	else
	{
		func_501(iParam0, 4);
		func_500(iVar0, 0);
	}
}

void func_407(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_234(iParam0))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

bool func_408(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_234(iParam0))
	{
		return false;
	}
	iVar0 = func_367(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_409(var uParam0)
{
	return (uParam0->f_12 != -943501440 && uParam0->f_12 < 1022739087);
}

void func_410(int iParam0)
{
	if (!func_182(iParam0))
	{
		func_123(&(Global_1902818.f_2), iParam0);
	}
}

void func_411(var uParam0, int iParam1, int iParam2)
{
	func_93(&(uParam0->f_148[iParam1 /*3*/]));
	uParam0->f_368[iParam1] = iParam2;
}

float func_412(var uParam0)
{
	if (!func_51(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_135(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_273() - uParam0->f_1);
}

bool func_413(var uParam0, var uParam1, int iParam2)
{
	if ((((func_502(uParam0, uParam1, 1) && !func_56(uParam1, 512)) && func_213(Global_38.f_5811)) && func_503(uParam0, iParam2) > 0f) && func_504(uParam1, iParam2))
	{
		return true;
	}
	return false;
}

bool func_414(var uParam0, var uParam1, int iParam2)
{
	if (!func_502(uParam0, uParam1, 1))
	{
		return true;
	}
	else if (func_56(uParam1, 512))
	{
		return true;
	}
	else if (!func_213(Global_38.f_5811))
	{
		return true;
	}
	else if (func_503(uParam0, iParam2) == 0f)
	{
		return true;
	}
	else if (!func_504(uParam1, iParam2))
	{
		return true;
	}
	return false;
}

void func_415(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;

	iVar0 = func_364(iParam2);
	if (func_365(iVar0) && !FLOCK::_0x19870C40C7EE15BE(iVar0, uParam1->f_77[iParam2]))
	{
		fVar1 = func_503(uParam0, iParam2);
		uParam1->f_77[iParam2] = FLOCK::_0xE93415B3307208E5(iVar0, func_141(), 0f, fVar1, 1176256512 /* Float: 10000f */, 0f, 0f, 0f, 1);
		func_366(iParam2, fVar1);
	}
}

void func_416(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == 3)
	{
		if (iParam2 == 1)
		{
			if (!HUD::_UI_PROMPT_GET_URGENT_PULSING_ENABLED(uParam0->f_70))
			{
				HUD::_UI_PROMPT_SET_URGENT_PULSING_ENABLED(uParam0->f_70, true);
			}
		}
		else if (HUD::_UI_PROMPT_GET_URGENT_PULSING_ENABLED(uParam0->f_70))
		{
			HUD::_UI_PROMPT_SET_URGENT_PULSING_ENABLED(uParam0->f_70, false);
		}
	}
	else if (func_234(uParam0->f_60[iParam1]))
	{
		iVar0 = func_367(uParam0->f_60[iParam1]);
		if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
		{
			if (iParam2 == 1)
			{
				if (!HUD::_UI_PROMPT_GET_URGENT_PULSING_ENABLED(Global_1951897[iVar0 /*23*/].f_3))
				{
					HUD::_UI_PROMPT_SET_URGENT_PULSING_ENABLED(Global_1951897[iVar0 /*23*/].f_3, true);
				}
			}
			else if (HUD::_UI_PROMPT_GET_URGENT_PULSING_ENABLED(Global_1951897[iVar0 /*23*/].f_3))
			{
				HUD::_UI_PROMPT_SET_URGENT_PULSING_ENABLED(Global_1951897[iVar0 /*23*/].f_3, false);
			}
		}
	}
}

bool func_417(var uParam0)
{
	if (!func_51(&(uParam0->f_76)))
	{
		func_93(&(uParam0->f_76));
	}
	if (func_161(&(uParam0->f_76)) >= 3f && func_213(Global_38.f_5811))
	{
		if (func_219(Global_38.f_5811) || func_220(Global_38.f_5811))
		{
			return true;
		}
	}
	return false;
}

bool func_418(var uParam0)
{
	if (!func_51(&(uParam0->f_76)))
	{
		func_93(&(uParam0->f_76));
	}
	return func_161(&(uParam0->f_76)) >= 3f;
}

Vector3 func_419(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_420(var uParam0)
{
	return uParam0->f_53 * 1000;
}

void func_421(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;

	if (!func_502(uParam0, uParam1, 1) || func_56(uParam1, 256))
	{
		return;
	}
	iVar0 = -1;
	if (!func_126(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((!ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar1]) && uParam2->f_154[iVar1] == 4) && func_152(uParam2, iVar1))
			{
				iVar9 = uParam2->f_247[iVar1];
				iVar2 = func_364(uParam2->f_247[iVar1]);
				if (func_365(iVar2) && FLOCK::_0x19870C40C7EE15BE(iVar2, uParam1->f_77[iVar9]))
				{
					fVar16 = uParam1->f_23[iVar1];
					if (fVar16 != 1203982208 && fVar16 < uParam1->f_168)
					{
						fVar17 = func_505(uParam0, uParam2->f_247[iVar1], Global_38.f_5811);
						if (fVar17 == 5f)
						{
							if (fVar10 <= 0f || fVar16 < fVar10)
							{
								fVar10 = fVar16;
								iVar3 = iVar1;
							}
						}
						else if (fVar17 == 4f)
						{
							if (fVar11 <= 0f || fVar16 < fVar11)
							{
								fVar11 = fVar16;
								iVar4 = iVar1;
							}
						}
						else if (fVar17 == 3f)
						{
							if (fVar12 <= 0f || fVar16 < fVar12)
							{
								fVar12 = fVar16;
								iVar5 = iVar1;
							}
						}
						else if (fVar17 == 2f)
						{
							if (fVar13 <= 0f || fVar16 < fVar13)
							{
								fVar13 = fVar16;
								iVar6 = iVar1;
							}
						}
						else if (fVar17 == 1f)
						{
							if (fVar14 <= 0f || fVar16 < fVar14)
							{
								fVar14 = fVar16;
								iVar7 = iVar1;
							}
						}
						else if (fVar17 == 1056964608)
						{
							if (fVar15 <= 0f || fVar16 < fVar15)
							{
								fVar15 = fVar16;
								iVar8 = iVar1;
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (fVar10 > 0f)
		{
			iVar0 = iVar3;
		}
		else if (fVar11 > 0f)
		{
			iVar0 = iVar4;
		}
		else if (fVar12 > 0f)
		{
			iVar0 = iVar5;
		}
		else if (fVar13 > 0f)
		{
			iVar0 = iVar6;
		}
		else if (fVar14 > 0f)
		{
			iVar0 = iVar7;
		}
		else if (fVar15 > 0f)
		{
			iVar0 = iVar8;
		}
	}
	if (func_126(iVar0))
	{
		func_506(uParam1, uParam2, iVar0);
	}
}

bool func_422(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_502(uParam0, uParam1, 0) || func_507(uParam1, uParam2)) || func_293())
	{
		return true;
	}
	iVar0 = func_77(uParam1);
	if ((func_126(iVar0) && uParam1->f_23[iVar0] != 1203982208) && uParam1->f_23[iVar0] > (uParam1->f_168 + 2f))
	{
		return true;
	}
	return false;
}

void func_423(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (func_508(uParam1, uParam2))
	{
		uParam1->f_163 = func_509(uParam1, uParam2);
		uParam1->f_166 = func_510(uParam1, uParam2);
		uParam1->f_167 = func_511(uParam1, uParam2);
		uParam1->f_164 = func_512(uParam1, uParam2);
		func_106(uParam1->f_166, uParam1->f_167);
		func_424(uParam0, 2, 1);
		if (uParam1->f_163 == 1)
		{
			func_416(uParam0, 2, 1);
		}
		func_513(uParam0, uParam1, uParam2);
		func_514(uParam0, uParam1);
		func_180(512, 0);
		uParam1->f_156++;
		func_93(&(uParam1->f_160));
		func_96(uParam1, 8192);
		func_96(uParam1, 16384);
	}
	if (func_322(512))
	{
		iVar0 = func_77(uParam1);
		if (!func_126(iVar0) || (func_51(&(uParam1->f_160)) && func_52(&(uParam1->f_160)) > uParam1->f_166))
		{
			func_228(512);
			if (uParam1->f_163 == 1)
			{
				func_23(uParam1);
				func_229(uParam0, uParam1, uParam2, 0);
			}
			uParam1->f_167 = 0;
			func_416(uParam0, 2, 0);
			func_424(uParam0, 2, 0);
		}
	}
}

void func_424(var uParam0, int iParam1, int iParam2)
{
	if (func_234(uParam0->f_60[iParam1]))
	{
		if (iParam2 == 1)
		{
			if (func_515(uParam0->f_60[iParam1], 1))
			{
				func_406(uParam0->f_60[iParam1], 1, 1, 1);
			}
		}
		else if (!func_515(uParam0->f_60[iParam1], 1))
		{
			func_406(uParam0->f_60[iParam1], 0, 1, 1);
		}
	}
}

void func_425(var uParam0, var uParam1, int iParam2, int iParam3)
{
	uParam1->f_3 = iParam2;
	switch (uParam1->f_3)
	{
		case 1:
			if ((func_441(Global_38.f_5811) && uParam1->f_55 > 3) || (func_442(Global_38.f_5811) && uParam1->f_55 > 4))
			{
				if (!func_218(Global_38.f_5811))
				{
					func_516(Global_38.f_5811);
				}
				func_214(uParam0, uParam1, 6.236711E+08f, 0, 0);
			}
			break;
		case 2:
			if (iParam3 == 1)
			{
				func_280(uParam0, 53, 1, -2, 1);
			}
			else
			{
				if (func_517(uParam1))
				{
					if (!func_34(uParam0, 16))
					{
						if (func_441(Global_38.f_5811) || func_442(Global_38.f_5811))
						{
							func_280(uParam0, 50, 1, -2, 1);
						}
						else
						{
							func_280(uParam0, 51, 1, -2, 1);
						}
					}
					if (!func_218(Global_38.f_5811))
					{
						func_516(Global_38.f_5811);
					}
					func_214(uParam0, uParam1, 6.236711E+08f, 0, 0);
				}
				if (!func_34(uParam0, 16))
				{
					func_280(uParam0, 52, 1, -2, 1);
				}
			}
			break;
		case 3:
			if (func_441(Global_38.f_5811) || func_442(Global_38.f_5811))
			{
				if (!func_218(Global_38.f_5811))
				{
					func_516(Global_38.f_5811);
				}
				func_214(uParam0, uParam1, 6.236711E+08f, 0, 0);
			}
			break;
	}
}

bool func_426(var uParam0, var uParam1)
{
	if (func_56(uParam1, 4096) || func_293())
	{
		return false;
	}
	func_282(uParam0, 1, 0, 1);
	if (func_408(uParam0->f_60[1], 1))
	{
		func_35(uParam0, 16);
		return true;
	}
	return false;
}

bool func_427()
{
	if (Global_1902818.f_36 != Global_38.f_5811 && func_213(Global_1902818.f_36))
	{
		return true;
	}
	return false;
}

bool func_428(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_77(uParam1);
	if ((((((func_126(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iVar0])) && func_502(uParam0, uParam1, 0)) && func_51(&(uParam1->f_160))) && func_52(&(uParam1->f_160)) < uParam1->f_166) && uParam1->f_23[iVar0] != 1203982208) && uParam1->f_23[iVar0] < (uParam1->f_168 + 2f))
	{
		return true;
	}
	return false;
}

void func_429(var uParam0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam2->f_123[iParam3]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam2->f_123[iParam3], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam2->f_123[iParam3], true, true);
	}
	TASK::CLEAR_PED_TASKS(uParam2->f_123[iParam3], true, false);
	func_145(uParam2, iParam3, 6);
	WATER::_0xF0FBF193F1F5C0EA(uParam2->f_123[iParam3]);
	func_93(&(uParam0->f_12));
	func_411(&(uParam0->f_82), 43, 2);
	func_411(&(uParam0->f_82), 45, 2);
	func_411(&(uParam0->f_82), 46, 2);
	func_411(&(uParam0->f_82), 47, 2);
	if (func_518(uParam2->f_247[iParam3]))
	{
		func_411(&(uParam0->f_82), 56, 50);
		func_411(&(uParam0->f_82), 57, 30);
	}
	else
	{
		func_53(&(uParam0->f_82.f_148[56 /*3*/]));
		func_53(&(uParam0->f_82.f_148[57 /*3*/]));
	}
	uParam1->f_172 = 0;
	uParam1->f_173 = 0;
	uParam1->f_174 = 0;
	uParam1->f_177 = 0;
	uParam1->f_178 = 0;
	uParam1->f_155 = 0;
	uParam1->f_222 = 3f;
	uParam1->f_223 = 0;
	uParam1->f_224 = 0;
	uParam2->f_439[iParam3] = 1;
	fVar0 = (uParam2->f_278[iParam3] / uParam2->f_470);
	fVar1 = (1056964608 * fVar0);
	fVar2 = (fVar1 / 2f);
	if (uParam2->f_402[iParam3] > 0f)
	{
		if (uParam2->f_402[iParam3] >= fVar2)
		{
			uParam1->f_202 = uParam2->f_402[iParam3];
		}
		else
		{
			uParam1->f_202 = fVar2;
		}
	}
	else
	{
		uParam1->f_202 = fVar1;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(uParam2->f_123[iParam3], true);
	PED::SET_PED_CONFIG_FLAG(uParam2->f_123[iParam3], 17, true);
	func_53(&(uParam1->f_219));
	func_228(512);
	TASK::_0x1F298C7BD30D1240(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam2->f_123[iParam3], false, true);
	TASK::_PED_FISHINGROD_HOOK_ENTITY(PLAYER::PLAYER_PED_ID(), uParam2->f_123[iParam3]);
	func_410(1);
	func_180(4, 1);
	func_114(uParam1, 0);
	func_23(uParam1);
	func_229(uParam0, uParam1, uParam2, 1);
}

bool func_430(var uParam0)
{
	if (Global_1902818.f_5 != 6)
	{
		return false;
	}
	if (func_51(&(uParam0->f_160)) && func_52(&(uParam0->f_160)) < uParam0->f_164 + 2000)
	{
		return true;
	}
	return false;
}

void func_431(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	float fVar1;

	if (!func_51(&(uParam0->f_12)))
	{
		uParam1->f_174 = 0;
		return;
	}
	iVar0 = func_381(uParam2, iParam3);
	fVar1 = (BUILTIN::TO_FLOAT(func_244(&(uParam0->f_12))) / IntToFloat(iVar0 * 1000));
	if (BUILTIN::ROUND((fVar1 * 1128792064)) >= uParam1->f_174)
	{
		uParam1->f_174 = BUILTIN::ROUND((fVar1 * 1128792064));
	}
	else if (!func_51(&(uParam1->f_212)) || func_244(&(uParam1->f_212)) > uParam0->f_55)
	{
		func_93(&(uParam1->f_212));
		if (uParam1->f_174 > 0)
		{
			uParam1->f_174 = (uParam1->f_174 - 1);
		}
	}
	func_224(uParam1->f_174, 0, 200);
}

void func_432(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if ((!func_81(uParam2, iParam3) || !func_261()) || func_263(uParam1, 0))
	{
		func_519(uParam0, uParam1, uParam2, iParam3);
	}
	else if ((func_131() || func_393()) || func_520())
	{
		func_521(uParam0, uParam1, uParam2);
	}
	else
	{
		func_519(uParam0, uParam1, uParam2, iParam3);
	}
	func_224(uParam1->f_173, 0, 200);
}

void func_433(var uParam0)
{
	if (uParam0->f_174 > 0 && uParam0->f_174 >= uParam0->f_173)
	{
		uParam0->f_172 = uParam0->f_174;
	}
	else
	{
		uParam0->f_172 = uParam0->f_173;
	}
	func_224(uParam0->f_172, 0, 200);
}

bool func_434(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam1->f_172 >= 200)
	{
		return true;
	}
	else if (!func_126(iParam3))
	{
		return true;
	}
	else if (ENTITY::IS_ENTITY_DEAD(uParam2->f_123[iParam3]))
	{
		return true;
	}
	else if (func_426(uParam0, uParam1))
	{
		return true;
	}
	else if (func_182(16))
	{
		return true;
	}
	return false;
}

void func_435()
{
	struct<2> Var0;

	Var0 = { func_522(-907.5198f) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_436(var uParam0, var uParam1, var uParam2)
{
	if (func_56(uParam1, 64) || func_56(uParam1, 32))
	{
		return;
	}
	func_301(uParam1, 32);
	func_523(uParam1, uParam2);
	func_445(uParam1, uParam2);
	func_20(&(uParam0->f_19));
	Global_1902818.f_41++;
	Global_1902818.f_42++;
	func_110(uParam1);
	func_301(uParam1, 128);
	func_524(0, 6);
	func_180(32, 1);
}

int func_437(var uParam0)
{
	if (func_51(&(uParam0->f_219)) && func_52(&(uParam0->f_219)) >= 6000)
	{
		return 1;
	}
	return 0;
}

float func_438(int iParam0, int iParam1)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				fVar0 = -2.540197E+33f;
			}
			else
			{
				fVar0 = 0.007720091f;
			}
			break;
		case 1:
			if (iParam1 == 1)
			{
				fVar0 = 8.913652E+14f;
			}
			else
			{
				fVar0 = 6.41116E-28f;
			}
			break;
		case 2:
			if (iParam1 == 1)
			{
				fVar0 = -2.391944E-27f;
			}
			else
			{
				fVar0 = 6.251295E-13f;
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
				fVar0 = 4.274601E-10f;
			}
			else
			{
				fVar0 = 3.872603E+30f;
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				fVar0 = 48.66112f;
			}
			else
			{
				fVar0 = -1.435848E+08f;
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				fVar0 = 8.426507E+12f;
			}
			else
			{
				fVar0 = NaNf;
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				fVar0 = 2.23625E+08f;
			}
			else
			{
				fVar0 = 6.563378E+09f;
			}
			break;
		case 7:
			if (iParam1 == 1)
			{
				fVar0 = -2.061378E+28f;
			}
			else
			{
				fVar0 = -4.464995E-17f;
			}
			break;
		case 8:
			if (iParam1 == 1)
			{
				fVar0 = 8.345165E-18f;
			}
			else
			{
				fVar0 = 4.988653E-32f;
			}
			break;
		case 9:
			if (iParam1 == 1)
			{
				fVar0 = -8.796708E+07f;
			}
			else
			{
				fVar0 = 4.18785E+12f;
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				fVar0 = 4.201407E-26f;
			}
			else
			{
				fVar0 = 4.331522E+15f;
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				fVar0 = 2.116761E-14f;
			}
			else
			{
				fVar0 = 0.1600948f;
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				fVar0 = -4.992456E-05f;
			}
			else
			{
				fVar0 = 6.598377E-37f;
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				fVar0 = 1.601328E-21f;
			}
			else
			{
				fVar0 = 1.449375E+18f;
			}
			break;
		case 14:
			if (iParam1 == 1)
			{
				fVar0 = 7.855662E-13f;
			}
			else
			{
				fVar0 = 9.475524E-11f;
			}
			break;
		default:
			break;
	}
	return fVar0;
}

bool func_439(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_217(bParam0, 0, 0, 0);
	iVar1 = func_525(bParam0, 0);
	return iVar0 >= iVar1;
}

void func_440(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_18))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1902818.f_5.f_7))
	{
		return;
	}
	uParam0->f_19 = 0f;
	func_93(&(uParam0->f_20));
	uParam0->f_18 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_mg_fishing_drips", Global_1902818.f_5.f_7, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_1902818.f_5.f_7, "SKEL_Tail5"), 1f, false, false, false);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_18, "fade", uParam0->f_19, false);
}

bool func_441(int iParam0)
{
	if ((iParam0 == 0.6467319f || iParam0 == 2.089274E-21f) || iParam0 == 2.173288E+11f)
	{
		return true;
	}
	return false;
}

bool func_442(int iParam0)
{
	if ((iParam0 == -1.072744E-16f || iParam0 == -7.975852E-25f) || iParam0 == 1.422386E-33f)
	{
		return true;
	}
	return false;
}

bool func_443(int iParam0)
{
	if ((((iParam0 == 2 || iParam0 == 3) || iParam0 == 5) || iParam0 == 7) || iParam0 == 8)
	{
		return true;
	}
	return false;
}

char* func_444(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_BLUEGILL_DESC";
		case 1:
			return "PROVISION_BULHDCATFSH_DESC";
		case 2:
			return "PROVISION_CHNPKRL_DESC";
		case 3:
			return "PROVISION_CHNCATFSH_DESC";
		case 4:
			return "PROVISION_LKSTURG_DESC";
		case 5:
			return "PROVISION_LRGMTHBASS_DESC";
		case 6:
			return "PROVISION_LNGNOSEGAR_DESC";
		case 7:
			return "PROVISION_MUSKIE_DESC";
		case 8:
			return "PROVISION_NPIKE_DESC";
		case 9:
			return "PROVISION_PERCH_DESC";
		case 10:
			return "PROVISION_RDFNPCKREL_DESC";
		case 11:
			return "PROVISION_ROCKBASS_DESC";
		case 12:
			return "PROVISION_SMLMTHBASS_DESC";
		case 13:
			return "PROVISION_SCKEYESAL_DESC";
		case 14:
			return "PROVISION_FISH_STHDTROUT_DESC";
		default:
			break;
	}
	return "";
}

void func_445(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_526(uParam0, uParam1);
	iVar1 = func_77(uParam0);
	if (!func_126(iVar1))
	{
		return;
	}
	func_528(func_527(uParam0, uParam1, iVar0, iVar1));
}

bool func_446(var uParam0, int iParam1)
{
	if (uParam0->f_340[iParam1] == 1)
	{
		return false;
	}
	return true;
}

bool func_447(int iParam0, bool bParam1)
{
	if (bParam1 && !func_234(iParam0))
	{
		return false;
	}
	return !func_496(iParam0, 4);
}

bool func_448()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_200() != 0)
	{
		return true;
	}
	if (func_529())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_530() };
	if (func_531(Var0))
	{
		return false;
	}
	Var2 = { func_532() };
	if (func_531(Var2))
	{
		return false;
	}
	return true;
}

bool func_449(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_14 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900460.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900460.f_68;
		}
		if (func_529())
		{
			return true;
		}
		if (Global_1072759.f_3 && !Global_1572887.f_10)
		{
			if ((Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900460.f_67;
		}
		else
		{
			return Global_1900460.f_68;
		}
	}
	if (iParam0 == 0 && func_531(func_533(0)))
	{
		return true;
	}
	if ((Global_1940186 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900595)
		{
			return true;
		}
	}
	switch (func_534(func_533(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

char* func_450(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_451(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_535(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_453(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

bool func_454(int iParam0)
{
	if (!func_536(iParam0))
	{
		return false;
	}
	return func_537(iParam0);
}

struct<2> func_455(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_456(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_457(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_344(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_458(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, iParam0))
	{
		return false;
	}
	return true;
}

bool func_459(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

int func_460(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_461(bool bParam0)
{
	struct<2> Var0;

	if (!func_345(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_462(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 2.772874E-30f;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 2.355696E+27f;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 3.107044E+08f;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -1.10511E-35f;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 0.01603136f;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -4.314404E+26f;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -2.677414E+07f;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -1.864473E+11f;
		case -28107610:
			return -7.008358E-38f;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 8.452614E+07f;
		case -643819742:
			return -6.237061E+18f;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -0.0003051266f;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -2.292356E+21f;
		case 1687431937:
			return -6.600012E-27f;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 3.05881E+28f;
		default:
			break;
	}
	return 0;
}

int func_463(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_464(bool bParam0)
{
	int iVar0;

	iVar0 = func_461(bParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -1.10511E-35f;
		case 1216664798:
			return 0.01603136f;
		case 829857647:
			return -4.314404E+26f;
		case -636562458:
			return -2.677414E+07f;
		case 252325943:
			return -1.864473E+11f;
		case 1115104855:
			return -7.008358E-38f;
		default:
			break;
	}
	return 0;
}

void func_465(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

void func_466(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_538(uParam0))
	{
		return;
	}
	if (Global_1292096.f_2012 < 20)
	{
		Global_1292096.f_2012++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_2012.f_1[iVar0 /*24*/] = { Global_1292096.f_2012.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = bParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1292096.f_2012.f_1[(Global_1292096.f_2012 - 1) /*24*/] = { Var1 };
}

struct<4> func_467(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_344(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_351(2.982335E+09f, func_539(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_351(2.982335E+09f, func_539(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_351(2.982335E+09f, func_539(), -5.45926E-19f, bParam0);
}

struct<4> func_468(bool bParam0)
{
	int iVar0;

	iVar0 = func_344(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_351(8.681942E-06f, func_467(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_351(8.681942E-06f, func_467(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_351(8.681942E-06f, func_467(bParam0), -1.942248E+12f, 0);
}

bool func_469(bool bParam0, bool bParam1)
{
	if (func_461(bParam0) == 4.161967E+25f)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_540();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_470(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_541(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_471(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_542(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_472(bool bParam0)
{
	int iVar0;

	iVar0 = func_344(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_351(3.507197E-29f, func_467(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_351(3.507197E-29f, func_467(bParam0), 12999093, 0);
}

bool func_473(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_461(bParam0);
	if (iVar1 == -252.4155f)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_543(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_474(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_544(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_475(int iParam0)
{
	if ((((iParam0 == 2.173288E+11f || iParam0 == -1.072744E-16f) || iParam0 == -5710.982f) || iParam0 == 8.997693E+26f) || iParam0 == -1.203225E-30f)
	{
		return true;
	}
	return false;
}

bool func_476(int iParam0)
{
	if ((((iParam0 == 0.6467319f || iParam0 == -7.975852E-25f) || iParam0 == 1.441069E+37f) || iParam0 == 4.412607E+09f) || iParam0 == -1.203225E-30f)
	{
		return true;
	}
	return false;
}

bool func_477(int iParam0)
{
	if ((((iParam0 == 2.089274E-21f || iParam0 == 1.422386E-33f) || iParam0 == -3.968113E-35f) || iParam0 == 0.4557617f) || iParam0 == -1.203225E-30f)
	{
		return true;
	}
	return false;
}

int func_478(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
		case 239629152:
			if (bParam1)
			{
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			}
			break;
	}
	return 0;
}

bool func_479(bool bParam0, int iParam1)
{
	if (!func_345(bParam0, 0))
	{
		return func_545(func_484(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return true;
	}
	return false;
}

void func_480(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = 2.868836E+26f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = -6.44427E+07f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = -1.5597E+17f;
			*uParam2 = 984456.8f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = -1.340805E-26f;
			*uParam2 = -1.163197E-36f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = -0.0004557966f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = -7.543728E-18f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = -4.09862E-21f;
			*uParam2 = 6.597174E-09f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = -1.78904E-16f;
			*uParam2 = -1.54477E-12f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = -4.051864E-08f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = 6.371044E+11f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = -2.04749E+08f;
			*uParam2 = 1.48591E+21f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = 3.971968E-06f;
			*uParam2 = 3.147558E+28f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = -9.057481E+30f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = 2.184573E-20f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = -9.738313E+24f;
			*uParam2 = -1.21702E+18f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = 39255.64f;
			*uParam2 = 1.256526E-30f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = 0.0001116685f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = -1.441753E-05f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = -8.900574E-37f;
			*uParam2 = 1.249562E-27f;
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = -4.758429E+16f;
			*uParam2 = 4.067655E+37f;
			break;
	}
}

struct<18> func_481(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<18> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
	}
	if (iParam1 != 0 && iParam1 != -5.45926E-19f)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -5.45926E-19f)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -5.45926E-19f)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

void func_482(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_483(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_344(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_484(bool bParam0)
{
	return bParam0;
}

bool func_485(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_486(int iParam0)
{
	return func_496(iParam0, 2);
}

float func_487(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_488(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -8.569155E-24f, 0, true);
	}
	else
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam0, -8.569155E-24f, 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_489(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, 1.977859E+07f);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_490(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 1f);
	}
}

float func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1056964608 /* Float: 0.5f */;
		case 1:
			return 1056964608 /* Float: 0.5f */;
		case 2:
			return 1056964608 /* Float: 0.5f */;
		case 3:
			return 1096810496 /* Float: 14f */;
		case 4:
			return 1096810496 /* Float: 14f */;
		case 5:
			return 4f;
		case 6:
			return 1096810496 /* Float: 14f */;
		case 7:
			return 1096810496 /* Float: 14f */;
		case 8:
			return 1096810496 /* Float: 14f */;
		case 9:
			return 1056964608 /* Float: 0.5f */;
		case 10:
			return 1056964608 /* Float: 0.5f */;
		case 11:
			return 1056964608 /* Float: 0.5f */;
		case 12:
			return 4f;
		case 13:
			return 4f;
		case 14:
			return 4f;
		default:
			break;
	}
	return 0f;
}

bool func_492()
{
	return (func_546(1) || func_546(4));
}

float func_493(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2f;
		case 1:
			return 2f;
		case 2:
			return 2f;
		case 3:
			return 1101004800 /* Float: 20f */;
		case 4:
			return 1101004800 /* Float: 20f */;
		case 5:
			return 6f;
		case 6:
			return 1101004800 /* Float: 20f */;
		case 7:
			return 1101004800 /* Float: 20f */;
		case 8:
			return 1101004800 /* Float: 20f */;
		case 9:
			return 2f;
		case 10:
			return 2f;
		case 11:
			return 2f;
		case 12:
			return 6f;
		case 13:
			return 6f;
		case 14:
			return 6f;
		default:
			break;
	}
	return 0f;
}

int func_494()
{
	return -1;
}

float func_495(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -1028390912; /* Float: -90f */
	}
	else
	{
		fVar0 = 1119092736; /* Float: 90f */
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 1135869952);
		}
	}
	return fVar0;
}

bool func_496(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_497(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951897[iParam0 /*23*/].f_4 = iParam1;
	Global_1951897[iParam0 /*23*/] = iParam4;
	Global_1951897[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951897[iParam0 /*23*/].f_2 = iParam5;
	Global_1951897[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951897[iParam0 /*23*/].f_9 = fParam9;
	Global_1951897[iParam0 /*23*/].f_10 = iParam10;
	Global_1951897[iParam0 /*23*/].f_11 = iParam11;
	Global_1951897[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_5 = iParam12;
	Global_1951897[iParam0 /*23*/].f_1 = 2;
	Global_1951897[iParam0 /*23*/].f_17 = -1;
	Global_1951897[iParam0 /*23*/].f_18 = iParam16;
	Global_1951897[iParam0 /*23*/].f_19 = iParam15;
	Global_1951897[iParam0 /*23*/].f_20 = bParam25;
	Global_1951897[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951897[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951897[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UI_PROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	HUD::_UI_PROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, true);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, false);
			break;
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, true);
			break;
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0f, fParam19);
			break;
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0f, fParam19);
			break;
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(iVar0, fParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UI_PROMPT_REGISTER_END(iVar0);
	Global_1951897[iParam0 /*23*/].f_3 = iVar0;
	func_499(iParam0, 1);
	func_500(iParam0, 1);
	func_501(iParam0, 128);
}

void func_498(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_499(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_496(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_500(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_501(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_502(var uParam0, var uParam1, int iParam2)
{
	if ((func_107(uParam0->f_82[41]) || func_107(uParam0->f_82[42])) || func_107(uParam0->f_82[35]))
	{
		return false;
	}
	if (iParam2 == 1)
	{
		if (uParam1->f_54 == 0)
		{
			if (Global_1902818.f_5.f_4 > 1063675494)
			{
				return false;
			}
		}
		else if ((!func_131() && func_51(&(uParam0->f_15))) && func_52(&(uParam0->f_15)) > 2000)
		{
			return false;
		}
	}
	if ((((((Global_1902818.f_5 != 6 || func_56(uParam1, 4096)) || !func_51(&(uParam1->f_203))) || func_161(&(uParam1->f_203)) <= IntToFloat(uParam1->f_165)) || func_547()) || !func_548(uParam1)) || (ENTITY::DOES_ENTITY_EXIST(func_141()) && func_385(func_142())))
	{
		return false;
	}
	return true;
}

float func_503(var uParam0, int iParam1)
{
	return func_549(uParam0, iParam1);
}

bool func_504(var uParam0, int iParam1)
{
	return (func_548(uParam0) && uParam0->f_15 > func_373(func_370(iParam1)));
}

float func_505(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_213(iParam2))
	{
		return 0f;
	}
	fVar0 = 0f;
	iVar1 = func_550(iParam1);
	iVar2 = COMPENDIUM::COMPENDIUM_FISH_GET_LURE_SUITABILITY_BY_STAT_ITEM(iVar1, iParam2);
	switch (iVar2)
	{
		case joaat("OUTSTANDING"):
			fVar0 = 4f;
			break;
		case joaat("EXCELLENT"):
			fVar0 = 3f;
			break;
		case joaat("GOOD"):
			fVar0 = 2f;
			break;
		case joaat("NORMAL"):
			fVar0 = 1f;
			break;
		case joaat("BAD"):
			fVar0 = 1056964608; /* Float: 0.5f */
			break;
		case 0:
			fVar0 = 0f;
			break;
		default:
			break;
	}
	if (fVar0 > 0f && uParam0->f_48 != -1)
	{
		if (func_219(Global_38.f_5811) || func_220(Global_38.f_5811))
		{
			if (((uParam0->f_48 == 0 && func_475(Global_38.f_5811)) || (uParam0->f_48 == 1 && func_476(Global_38.f_5811))) || (uParam0->f_48 == 2 && func_477(Global_38.f_5811)))
			{
				fVar0 = func_551(fVar0);
			}
		}
	}
	return fVar0;
}

void func_506(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam1->f_123[iParam2]) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam1->f_123[iParam2], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_123[iParam2], true, true);
		return;
	}
	func_43(uParam0, uParam1, iParam2);
	func_145(uParam1, iParam2, 5);
	uParam0->f_156 = 0;
	uParam0->f_163 = 0;
	func_250(uParam1, iParam2);
	DECORATOR::DECOR_SET_BOOL(uParam1->f_123[iParam2], "Fish_Prevent_Tasking", true);
}

bool func_507(var uParam0, var uParam1)
{
	if ((func_552(uParam0, uParam1) && func_51(&(uParam0->f_160))) && func_52(&(uParam0->f_160)) > uParam0->f_166)
	{
		return true;
	}
	if (func_322(1))
	{
		return true;
	}
	return false;
}

bool func_508(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if ((func_126(iVar0) && func_61(uParam1->f_247[iVar0])) && uParam0->f_156 < uParam1->f_800[uParam1->f_247[iVar0] /*10*/])
	{
		if (!func_51(&(uParam0->f_160)) || func_244(&(uParam0->f_160)) >= uParam0->f_164)
		{
			return true;
		}
	}
	return false;
}

int func_509(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if ((func_126(iVar0) && func_61(uParam1->f_247[iVar0])) && uParam1->f_800[uParam1->f_247[iVar0] /*10*/].f_1[uParam0->f_156] == 1)
	{
		return 1;
	}
	return 0;
}

int func_510(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_77(uParam0);
	if (!func_126(iVar0) || uParam0->f_163 == 0)
	{
		return uParam1->f_955;
	}
	iVar1 = uParam1->f_956;
	switch (uParam1->f_309[iVar0])
	{
		case 0:
			iVar1 = uParam1->f_956;
			break;
		case 1:
			iVar1 = uParam1->f_957;
			break;
		case 2:
			iVar1 = uParam1->f_958;
			break;
		case 3:
			iVar1 = uParam1->f_959;
			break;
		case 4:
			iVar1 = uParam1->f_960;
			break;
	}
	if (uParam0->f_54 == 1)
	{
		iVar1 = (iVar1 + uParam1->f_961);
	}
	return iVar1;
}

int func_511(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_163 == 0)
	{
		return 1;
	}
	iVar0 = func_77(uParam0);
	fVar1 = (func_553(uParam1, iVar0) * 1120403456);
	return (150 + BUILTIN::ROUND(fVar1));
}

int func_512(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam0->f_166;
	if (uParam0->f_163 == 0)
	{
		iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_951, uParam1->f_952));
	}
	else
	{
		iVar0 = (iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_953, uParam1->f_954));
	}
	return iVar0;
}

void func_513(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	iVar0 = func_77(uParam1);
	if (!func_126(iVar0))
	{
		return;
	}
	if (uParam1->f_163 == 1)
	{
		sVar1 = "LARGE_BITE";
		sVar2 = "LARGE_BITE_ROD";
	}
	else
	{
		sVar1 = "SMALL_BITE";
		sVar2 = "SMALL_BITE_ROD";
	}
	iVar3 = func_554(uParam1);
	if (iVar3 > -1)
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY_WITH_SET(uParam1->f_57[iVar3], sVar1, func_138(), *uParam0, false, 0);
		AUDIO::_SET_VARIABLE_ON_SOUND_WITH_ID(uParam1->f_57[iVar3], "FishSize", uParam2->f_278[iVar0]);
	}
	iVar3 = func_555(uParam1);
	if (iVar3 > -1)
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY_WITH_SET(uParam1->f_62[iVar3], sVar2, PLAYER::PLAYER_PED_ID(), *uParam0, false, 0);
		AUDIO::_SET_VARIABLE_ON_SOUND_WITH_ID(uParam1->f_62[iVar3], "FishSize", uParam2->f_278[iVar0]);
	}
}

void func_514(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;

	if ((uParam1->f_54 == 0 && ENTITY::DOES_ENTITY_EXIST(func_138())) && uParam1->f_12 > -1119040307)
	{
		iVar0 = func_77(uParam1);
		if (func_126(iVar0))
		{
			vVar1 = { func_139() };
			vVar4 = { vVar1 };
			vVar4.f_2 = (vVar4.z - 1f);
			vVar7 = { func_419(vVar4 - vVar1) };
			if (uParam1->f_163 == 1)
			{
				fVar10 = uParam0->f_50;
			}
			else
			{
				fVar10 = uParam0->f_51;
			}
			vVar11 = { vVar7 * Vector(fVar10, fVar10, fVar10) };
			ENTITY::APPLY_FORCE_TO_ENTITY(func_138(), 3, vVar11, 0f, 0f, 0f, 0, false, true, true, false, true);
		}
	}
}

bool func_515(int iParam0, bool bParam1)
{
	if (bParam1 && !func_234(iParam0))
	{
		return true;
	}
	return func_496(iParam0, 4);
}

void func_516(bool bParam0)
{
	if (func_218(bParam0))
	{
		return;
	}
	if (func_556(bParam0, 1, 0, -5.149929E+33f))
	{
	}
}

bool func_517(var uParam0)
{
	int iVar0;

	if (func_182(16))
	{
		return false;
	}
	if (func_441(Global_38.f_5811) || func_442(Global_38.f_5811))
	{
		return true;
	}
	if (func_219(Global_38.f_5811))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (iVar0 <= uParam0->f_175)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_518(int iParam0)
{
	if ((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 7) || iParam0 == 8) || iParam0 == 12) || iParam0 == 13) || iParam0 == 14)
	{
		return true;
	}
	return false;
}

void func_519(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (uParam1->f_173 > 0)
	{
		if (!func_51(&(uParam1->f_209)) || func_244(&(uParam1->f_209)) > uParam0->f_55)
		{
			func_93(&(uParam1->f_209));
			if (func_81(uParam2, iParam3))
			{
				iVar0++;
			}
			else
			{
				iVar0 += 2;
			}
			uParam1->f_173 = (uParam1->f_173 - iVar0);
		}
	}
}

bool func_520()
{
	return Global_1902818.f_5.f_2 > (IntToFloat(func_557()) - 1036831949);
}

void func_521(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0->f_54;
	if (func_270(uParam1) && (!func_51(&(uParam1->f_206)) || func_244(&(uParam1->f_206)) > iVar0))
	{
		func_93(&(uParam1->f_206));
		iVar1 = func_77(uParam1);
		if (func_126(iVar1))
		{
			iVar2 = 1;
			if (func_520())
			{
				func_280(uParam0, 40, 1, -2, 1);
			}
			if (func_131())
			{
				if (func_518(uParam2->f_247[iVar1]))
				{
					iVar2 += 2;
				}
				else
				{
					iVar2++;
				}
			}
			if (uParam1->f_176 == 0 && uParam1->f_173 > 75)
			{
				uParam1->f_176 = 1;
				uParam1->f_175++;
			}
			iVar2 = (iVar2 + uParam1->f_175);
			uParam1->f_173 = (uParam1->f_173 + iVar2);
		}
	}
}

struct<2> func_522(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

void func_523(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	struct<2> Var5;
	var uVar17;
	struct<15> Var21;

	iVar0 = func_77(uParam0);
	if (!func_126(iVar0))
	{
		return;
	}
	iVar1 = func_437(uParam0);
	bVar2 = func_438(uParam1->f_247[iVar0], iVar1);
	if (uParam1->f_309[iVar0] == 4)
	{
		return;
	}
	else if (func_439(bVar2))
	{
		return;
	}
	if (!func_208(0) || func_209())
	{
		iVar3 = func_558(uParam1->f_247[iVar0]);
		fVar4 = func_559(iVar1);
		Var5.f_1 = 10;
		func_560(&Var5, fVar4);
		if (func_561(iVar3, &Var5, &uVar17, 0, 0))
		{
			Var21.f_3.f_1 = 10;
			Var21.f_1 = uParam1->f_278[iVar0];
			func_562(&uVar17, Var21);
		}
		return;
	}
	func_563(bVar2, uParam1->f_278[iVar0]);
}

void func_524(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_564(iParam0))
	{
		return;
	}
	if (func_565(iParam0))
	{
		return;
	}
	if (!func_566(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = func_567(iParam1);
	if (iVar1 == 0 || iParam1 == -1)
	{
		return;
	}
	iVar2 = (Global_1149417.f_5701[iVar0] + iVar1);
	if (Global_1149417.f_5701[iVar0] <= (Global_1901671.f_824.f_1 + Global_1901671.f_824.f_3))
	{
		iVar2 = (Global_1901671.f_824.f_1 + Global_1901671.f_824.f_3);
	}
	if (Global_1149417.f_5701[iVar0] >= (Global_1901671.f_824.f_2 + Global_1901671.f_824.f_11))
	{
		iVar2 = (Global_1901671.f_824.f_2 + Global_1901671.f_824.f_11);
	}
	if (func_568(iParam0, iVar2))
	{
		iVar3 = func_569(iVar2);
		iVar4 = func_570(iVar3);
		iVar2 = iVar4;
	}
	if (func_571(iParam0))
	{
		return;
	}
	func_572(iParam0, iVar2);
	Global_1149417.f_5701[iVar0] = iVar2;
}

int func_525(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_350(bParam0, 0, 0) };
	return func_573(bParam0, &Var0, 0, bParam1);
}

int func_526(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if (!func_126(iVar0))
	{
		return 15;
	}
	return uParam1->f_247[iVar0];
}

int func_527(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_437(uParam0);
	if (iVar0 == 1 || uParam1->f_340[iParam3] == 1)
	{
		return 12;
	}
	else if (func_518(iParam2))
	{
		return 13;
	}
	return 12;
}

int func_528(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_574())
	{
		return 0;
	}
	if (!NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return 0;
	}
	if (func_575())
	{
		return 0;
	}
	iVar0 = func_576(iParam0);
	iVar1 = func_577(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_211(func_578(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_529()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_5)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_531(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_530()
{
	return Global_1051268;
}

bool func_531(struct<2> Param0)
{
	if (!func_579(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_580(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_532()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_533(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_533(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

struct<2> func_533(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_534(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_535(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_581(iParam3, &vVar0, &Var3, &uVar6);
	if (func_582(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_536(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_537(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

bool func_538(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<4> func_539()
{
	struct<4> Var0;

	return Var0;
}

int func_540()
{
	if (func_583(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_541(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_345(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_362(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_351(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_344(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_344(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_542(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_344(0);
	*iParam1 = { func_351(bParam0, func_468(0), fParam3, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam1, iParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_543(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1.821884E-21f)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, -3.294982E+22f) == -5.586199E-31f)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

int func_544(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_344(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_545(bool bParam0, int iParam1)
{
	if (!func_485(bParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return 1;
	}
	return 0;
}

int func_546(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_338(func_337());
	if (func_584(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_584(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_547()
{
	vector3 vVar0;

	if (Global_1902818.f_5.f_2 <= 3f)
	{
		return true;
	}
	vVar0 = { func_142() };
	if (!func_38(vVar0) && func_274(Global_34, vVar0) < 3f)
	{
		return true;
	}
	return false;
}

bool func_548(var uParam0)
{
	return (uParam0->f_14 != -943501440 && uParam0->f_14 < 1022739087);
}

float func_549(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 0f;
	fVar1 = func_505(uParam0, iParam1, Global_38.f_5811);
	if (fVar1 > 0f)
	{
		fVar0 = (5f * fVar1);
	}
	if (fVar0 > 0f)
	{
		iVar2 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
		fVar0 = (fVar0 * func_585(iVar2));
	}
	return fVar0;
}

int func_550(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2.926168E-33f;
		case 1:
			return -5.462538f;
		case 2:
			return -4.784702E+10f;
		case 3:
			return -6.023587E-14f;
		case 4:
			return -2.342158E-08f;
		case 5:
			return 1.664632E+25f;
		case 6:
			return -1.005847E-05f;
		case 7:
			return -4213762f;
		case 8:
			return -3.374343E-14f;
		case 9:
			return -2.25821E-23f;
		case 10:
			return -2.306786E-16f;
		case 11:
			return -2.110178E-07f;
		case 12:
			return -1.124226E-21f;
		case 13:
			return 1.159723E-11f;
		case 14:
			return -1.578159E+34f;
		default:
			break;
	}
	return 0;
}

float func_551(float fParam0)
{
	if (fParam0 == 4f)
	{
		fParam0 = 5f;
	}
	else if (fParam0 == 3f)
	{
		fParam0 = 4f;
	}
	else if (fParam0 == 2f)
	{
		fParam0 = 3f;
	}
	else if (fParam0 == 1f)
	{
		fParam0 = 2f;
	}
	else if (fParam0 == 1056964608)
	{
		fParam0 = 1f;
	}
	return fParam0;
}

bool func_552(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_77(uParam0);
	if ((func_126(iVar0) && func_61(uParam1->f_247[iVar0])) && uParam0->f_156 >= uParam1->f_800[uParam1->f_247[iVar0] /*10*/])
	{
		return true;
	}
	return false;
}

float func_553(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	fVar0 = func_375(uParam0->f_247[iParam1], 0);
	fVar1 = func_376(uParam0->f_247[iParam1], 0);
	fVar2 = (fVar1 - fVar0);
	fVar3 = (uParam0->f_278[iParam1] - fVar0);
	fVar4 = func_183((fVar3 / fVar2), 0f, 1f);
	return fVar4;
}

int func_554(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (AUDIO::_HAS_SOUND_ID_FINISHED(uParam0->f_57[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_555(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (AUDIO::_HAS_SOUND_ID_FINISHED(uParam0->f_62[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_556(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_345(bParam0, 0))
	{
		return false;
	}
	if (iParam3 == -5.149929E+33f)
	{
		if (func_586(bParam0))
		{
			iParam3 = 9.275179E-19f;
		}
	}
	bVar0 = iParam3 == 9.275179E-19f;
	bVar1 = iParam3 == 1.994827E+33f;
	bVar2 = iParam3 == -1.202057E-11f;
	bVar3 = func_360(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_587(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_210(bParam0, 1))
	{
		return false;
	}
	Var5 = { func_588(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_217(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var5, iParam1);
		}
		else if ((func_217(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_556(bParam0, func_217(bParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_346(bParam0) == -3.265313E+23f)
	{
		if (!func_589(bParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_590(bParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_350(bParam0, 0, 0) };
		if (func_208(0) && Var7.f_4 == 4.978612f)
		{
			func_591(1, 0, 0);
		}
	}
	if (bParam0 == -2.680077E+18f)
	{
		Global_1940072.f_21 = 0;
	}
	if (!func_208(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 6.236711E+08f)
	{
		func_587(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

int func_557()
{
	return BUILTIN::ROUND(Global_1902818.f_5.f_1);
}

int func_558(int iParam0)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		default:
			return 0;
	}
	return RDR_LOCAL_LOAD_S;
}

float func_559(int iParam0)
{
	if (iParam0 == 1)
	{
		return -2.793692E-28f;
	}
	return 2.770086E+17f;
}

void func_560(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == 8.967694E-17f || uParam0->f_1[iVar1] == 1.721179E-28f)
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == 2.95884E+10f || uParam0->f_1[iVar1] == 2.575707E+29f)
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == 2.770086E+17f || uParam0->f_1[iVar1] == -2.793692E-28f) || uParam0->f_1[iVar1] == 1.982896E+31f)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

bool func_561(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	func_592(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return false;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_593(uParam2, iParam0, Var1);
	return true;
}

void func_562(var uParam0, struct<15> Param1)
{
	int iVar0;

	if (!func_538(uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_2539)
	{
		if (func_594(&(Global_1292096.f_2539.f_1[iVar0 /*22*/]), uParam0))
		{
			if (Global_1292096.f_2539.f_1[iVar0 /*22*/].f_6 == 1)
			{
				Global_1292096.f_2539.f_1[iVar0 /*22*/].f_7 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

void func_563(bool bParam0, float fParam1)
{
	bool bVar0;

	bVar0 = func_595(bParam0);
	if (func_208(0) && !func_209())
	{
		if (func_596(bParam0, 1, bVar0, 0, 0, 6.028273E-12f, fParam1, 0, 0, 0))
		{
		}
	}
}

bool func_564(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 1);
}

bool func_565(int iParam0)
{
	int iVar0;

	if (!func_564(iParam0))
	{
		return false;
	}
	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1149417.f_5701.f_10[iParam0] == iVar0 || Global_1149417.f_5701.f_10[iParam0] == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_566(int iParam0)
{
	int iVar0;

	if (!func_564(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_122(Global_1149417.f_5701.f_6[iVar0], 4))
	{
		return true;
	}
	if (Global_1149417.f_5701.f_4[iVar0] != 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 0:
			if (func_210(4.080975E-29f, 1))
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

int func_567(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 6:
			return Global_1901671.f_824.f_12;
		case 7:
			return Global_1901671.f_824.f_13;
		case 8:
			return Global_1901671.f_824.f_14;
		case 9:
			return Global_1901671.f_824.f_15;
		case 10:
			return Global_1901671.f_824.f_16;
		case 11:
			return Global_1901671.f_824.f_17;
		case 12:
			return Global_1901671.f_824.f_18;
		case 0:
			return Global_1901671.f_824.f_19;
		case 1:
			return Global_1901671.f_824.f_20;
		case 2:
			return Global_1901671.f_824.f_21;
		case 3:
			return Global_1901671.f_824.f_22;
		case 4:
			return Global_1901671.f_824.f_23;
		case 5:
			return Global_1901671.f_824.f_24;
		default:
			break;
	}
	return 0;
}

bool func_568(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_564(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_122(Global_1149417.f_5701.f_6[iVar0], 2))
	{
		return false;
	}
	iVar1 = func_597(iParam0);
	iVar2 = iVar1;
	iVar3 = func_569(iParam1);
	iVar4 = iVar3;
	if (iVar4 < iVar2)
	{
		return true;
	}
	return false;
}

int func_569(int iParam0)
{
	if (iParam0 <= Global_1901671.f_824.f_3)
	{
		return 0;
	}
	if (iParam0 <= Global_1901671.f_824.f_4)
	{
		if (Global_1901671.f_824.f_4 > 0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam0 <= Global_1901671.f_824.f_5)
	{
		if (Global_1901671.f_824.f_5 > 0)
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (iParam0 <= Global_1901671.f_824.f_6)
	{
		if (Global_1901671.f_824.f_6 > 0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (iParam0 <= Global_1901671.f_824.f_7)
	{
		if (Global_1901671.f_824.f_7 > 0)
		{
			return 3;
		}
		else
		{
			return 4;
		}
	}
	if (iParam0 <= Global_1901671.f_824.f_8)
	{
		if (Global_1901671.f_824.f_8 > 0)
		{
			return 4;
		}
		else
		{
			return 5;
		}
	}
	if (iParam0 <= Global_1901671.f_824.f_9)
	{
		if (Global_1901671.f_824.f_9 > 0)
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	if (iParam0 <= Global_1901671.f_824.f_10)
	{
		if (Global_1901671.f_824.f_10 > 0)
		{
			return 6;
		}
		else
		{
			return 7;
		}
	}
	if (iParam0 <= Global_1901671.f_824.f_11)
	{
		if (Global_1901671.f_824.f_11 > 0)
		{
			return 7;
		}
		else
		{
			return 8;
		}
	}
	return 8;
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_824.f_3;
		case 1:
			return Global_1901671.f_824.f_4;
		case 2:
			return Global_1901671.f_824.f_5;
		case 3:
			return Global_1901671.f_824.f_6;
		case 4:
			return Global_1901671.f_824.f_7;
		case 5:
			return Global_1901671.f_824.f_8;
		case 6:
			return Global_1901671.f_824.f_9;
		case 7:
			return Global_1901671.f_824.f_10;
		case 8:
			return Global_1901671.f_824.f_11;
		default:
			break;
	}
	return 0;
}

bool func_571(int iParam0)
{
	int iVar0;

	if (!func_564(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_122(Global_1149417.f_5701.f_6[iVar0], 1))
	{
		return false;
	}
	if (func_122(Global_1149417.f_5701.f_8[iVar0], 1))
	{
		return true;
	}
	return false;
}

void func_572(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_564(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!func_122(Global_1149417.f_5701.f_6[iVar0], 1))
	{
		return;
	}
	if (func_571(iParam0))
	{
		return;
	}
	iVar1 = func_569(iParam1);
	iVar2 = iVar1;
	if (Global_1149417.f_5701.f_2[iVar0] > iVar2)
	{
		if ((func_122(Global_1149417.f_5701.f_6[iVar0], 2) && (iParam1 - 1) <= func_570(iVar1)) && iParam1 <= 0)
		{
			if (!func_122(Global_1149417.f_5701.f_8[iVar0], 1))
			{
				func_123(&(Global_1149417.f_5701.f_8[iVar0]), 1);
				return;
			}
			return;
		}
		else if (iParam1 > 0 && (iParam1 - 1) <= func_570(iVar1))
		{
			if (!func_122(Global_1149417.f_5701.f_8[iVar0], 1))
			{
				func_123(&(Global_1149417.f_5701.f_8[iVar0]), 1);
				return;
			}
		}
	}
}

int func_573(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_345(bParam0, 0))
	{
		if (func_485(func_484(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_346(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_362(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_344(bParam3), bParam0);
}

bool func_574()
{
	return (func_598(0) && func_598(1));
}

bool func_575()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

int func_576(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

int func_577(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_599(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_50[iParam0];
		case 1:
			return Global_1956862.f_1565.f_2.f_50[iParam0];
		default:
			break;
	}
	return 1;
}

bool func_578(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -6.540436E+35f;
		case 2:
			return -4.457409E-26f;
		case 3:
			return -3.5234E+17f;
		case 4:
			return 7.563374E+19f;
		case 5:
			return -7.734187E-14f;
		case 6:
			return -1.069422E-30f;
		case 7:
			return -1.520188E-37f;
		case 8:
			return -3.718011E+10f;
		case 9:
			return NaNf;
		case 10:
			return -2.229862E+25f;
		case 11:
			return -8.310997E-25f;
		case 12:
			return -3.184342E-29f;
		case 13:
			return 3.415157E-19f;
		case 14:
			return NaNf;
		case 15:
			return 6.999613E-32f;
		case 16:
			return 4.078473E-38f;
		case 17:
			return 1.579125E+34f;
		case 24:
			return 8.032001E-30f;
		case 25:
			return -1.747018E-22f;
		case 26:
			return -3.256739E+21f;
		case 27:
			return -2.499351E+23f;
		case 28:
			return 1.233249E-36f;
		case 35:
			return -1.231178E-15f;
		case 36:
			return 1.51159E+21f;
		case 37:
			return 0.6481152f;
		case 38:
			return 1.535398E+36f;
		case 39:
			return 43.34694f;
		case 40:
			return 5.975331E-24f;
		case 41:
			return 2.911409E+38f;
		case 42:
			return -3.584324E-31f;
		case 43:
			return -2.024568E+12f;
		case 55:
			return 1.962766E+36f;
		default:
			break;
	}
	return false;
}

bool func_579(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
		case 3:
			return Global_1072759.f_573.f_2103;
		case 4:
			return Global_1072759.f_573.f_12605;
		case 5:
			return Global_1072759.f_573.f_12907;
		case 6:
			return Global_1072759.f_573.f_15909;
		case 7:
			return Global_1072759.f_573.f_16511;
		case 8:
			return Global_1072759.f_573.f_18913;
		default:
			break;
	}
	return -1;
}

void func_581(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -993388388, 1151178457, 1129141371 };
			*uParam2 = { 1125515264 /* Float: 150f */, 1125515264 /* Float: 150f */, 1127743488 /* Float: 184f */ };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -977899688, -982930096, -1046164275 /* Float: -20.6f */ };
			*uParam2 = { 1109393408 /* Float: 40f */, 1108082688 /* Float: 35f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 1110704128; /* Float: 45f */
			break;
		case 2:
			*uParam1 = { -981334653, -986624348, -1051014988 };
			*uParam2 = { 1110179840 /* Float: 43f */, 1128595456 /* Float: 197f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 1108869120; /* Float: 38f */
			break;
		case 3:
			*uParam1 = { -980926749, -985614848, -1051014988 };
			*uParam2 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -980748745, -987229123, -1051014988 };
			*uParam2 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -980812104, -989234078, 1102240023 };
			*uParam2 = { 1095761920 /* Float: 13f */, 1101529088 /* Float: 21f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 1107820544; /* Float: 34f */
			break;
		case 6:
			*uParam1 = { -978479587, -988430561, 1088782598 /* Float: 7.172f */ };
			*uParam2 = { 1101529088 /* Float: 21f */, 1101529088 /* Float: 21f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -984124346, -988996719, 1088782598 /* Float: 7.172f */ };
			*uParam2 = { 1109393408 /* Float: 40f */, 1102577664 /* Float: 23f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -994952380, -987279983, 1116893872 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1103626240 /* Float: 25f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 1104150528; /* Float: 26f */
			break;
		case 9:
			*uParam1 = { -982558974, -985918423, -1051014988 };
			*uParam2 = { 1109131264 /* Float: 39f */, 1113063424 /* Float: 54f */, 1116471296 /* Float: 70f */ };
			*uParam3 = -1036517376; /* Float: -46f */
			break;
		case 10:
			*uParam1 = { -980237705, -984716046, -1051014988 };
			*uParam2 = { 1120927744 /* Float: 104f */, 1113849856 /* Float: 57f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -979483224, -985383477, -1051014988 };
			*uParam2 = { 1102577664 /* Float: 23f */, 1104150528 /* Float: 26f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 1110179840; /* Float: 43f */
			break;
		case 12:
			*uParam1 = { -993264640, -986545811, -1076719780 };
			*uParam2 = { 1125449728 /* Float: 149f */, 1115815936 /* Float: 65f */, 1125777408 /* Float: 154f */ };
			*uParam3 = 1109131264; /* Float: 39f */
			break;
		case 13:
			*uParam1 = { -1012010549, -1023166382, -1076719780 };
			*uParam2 = { 1112539136 /* Float: 52f */, 1109393408 /* Float: 40f */, 1125777408 /* Float: 154f */ };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -989534208, 1118872142, 1124806099 };
			*uParam2 = { 1135017984 /* Float: 334f */, 1126891520 /* Float: 171f */, 1133150208 /* Float: 277f */ };
			*uParam3 = -1036779520; /* Float: -45f */
			break;
		case 15:
			*uParam1 = { 1153745396, 1150041735, 1128896922 /* Float: 201.6f */ };
			*uParam2 = { 1125318656 /* Float: 147f */, 1128398848 /* Float: 194f */, 1128857600 /* Float: 201f */ };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -987014590, -988513235, 1107029918 };
			*uParam2 = { 1118568448 /* Float: 86f */, 1114898432 /* Float: 61f */, 1112014848 /* Float: 50f */ };
			*uParam3 = 1093664768; /* Float: 11f */
			break;
		case 17:
			*uParam1 = { 1155377750, -977616212, 1116689138 };
			*uParam2 = { 1107820544 /* Float: 34f */, 1107820544 /* Float: 34f */, 1120403456 /* Float: 100f */ };
			*uParam3 = -1023934464; /* Float: -124f */
			break;
		case 18:
			*uParam1 = { -990066622, -985792868, 1103626240 /* Float: 25f */ };
			*uParam2 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1110704128 /* Float: 45f */ };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1152271745, -1004409078, 1116793078 };
			*uParam2 = { 1100480512 /* Float: 19f */, 1099956224 /* Float: 18f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 1109393408; /* Float: 40f */
			break;
		case 20:
			*uParam1 = { -1015917052, 1154157552, 1129637085 };
			*uParam2 = { 1120141312 /* Float: 98f */, 1112539136 /* Float: 52f */, 1123024896 /* Float: 120f */ };
			*uParam3 = 1112276992; /* Float: 51f */
			break;
		case 21:
			*uParam1 = { -983730127, -985825124, -1051014988 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -980949699, -988300976, -1051014988 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -1010578686, 1147573649, 1124702880 };
			*uParam2 = { 1106771968 /* Float: 31f */, 1106247680 /* Float: 30f */, 1109393408 /* Float: 40f */ };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -987361284, 1125755585, 1128073986 };
			*uParam2 = { 1127284736 /* Float: 177f */, 1123811328 /* Float: 126f */, 1120665600 /* Float: 102f */ };
			*uParam3 = 1112539136; /* Float: 52f */
			break;
		case 25:
			*uParam1 = { 1125915623, 1138026054, 1123024896 /* Float: 120f */ };
			*uParam2 = { 1132003328 /* Float: 249f */, 1121976320 /* Float: 112f */, 1123024896 /* Float: 120f */ };
			*uParam3 = -1039138816; /* Float: -36f */
			break;
		case 26:
			*uParam1 = { -977837056, -986970354, -1051014988 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 1147183186, -1012424638, 1111596204 };
			*uParam2 = { 1113587712 /* Float: 56f */, 1125646336 /* Float: 152f */, 1116471296 /* Float: 70f */ };
			*uParam3 = -1039138816; /* Float: -36f */
			break;
		case 28:
			*uParam1 = { -1000440676, -1020568797, 1119163122 };
			*uParam2 = { 1127481344 /* Float: 180f */, 1119748096 /* Float: 95f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 1105723392; /* Float: 29f */
			break;
		case 29:
			*uParam1 = { 1141824782, 1156977582, 1123408937 };
			*uParam2 = { 1107296256 /* Float: 32f */, 1111752704 /* Float: 49f */, 1124859904 /* Float: 140f */ };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -986899739, -985092137, 1103626240 /* Float: 25f */ };
			*uParam2 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1110704128 /* Float: 45f */ };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -978778042, -983264190, -1050153058 };
			*uParam2 = { 1108344832 /* Float: 36f */, 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */ };
			*uParam3 = -1044381696; /* Float: -24f */
			break;
		case 32:
			*uParam1 = { 1159287984, 1133598474, 1116420833 };
			*uParam2 = { 1108082688 /* Float: 35f */, 1109917696 /* Float: 42f */, 1100480512 /* Float: 19f */ };
			*uParam3 = -1065353216; /* Float: -4f */
			break;
		case 33:
			*uParam1 = { -1004485968, 1133194740, 1119813632 /* Float: 95.5f */ };
			*uParam2 = { 1116471296 /* Float: 70f */, 1116078080 /* Float: 67f */, 1115815936 /* Float: 65f */ };
			*uParam3 = -1025900544; /* Float: -109f */
			break;
		case 34:
			*uParam1 = { -1024676463, -1043934478, 1119998050 };
			*uParam2 = { 1118306304 /* Float: 84f */, 1116340224 /* Float: 69f */, 1108606976 /* Float: 37f */ };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -986515636, -987089883, 1119511511 };
			*uParam2 = { 1128529920 /* Float: 196f */, 1125974016 /* Float: 157f */, 1118437376 /* Float: 85f */ };
			*uParam3 = -1047527424; /* Float: -18f */
			break;
		case 36:
			*uParam1 = { -983970554, -984046047, -1084663792 };
			*uParam2 = { 1094713344 /* Float: 12f */, 1094713344 /* Float: 12f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -983413248, -983597359, -1084663792 };
			*uParam2 = { 1123811328 /* Float: 126f */, 1118568448 /* Float: 86f */, 1116471296 /* Float: 70f */ };
			*uParam3 = -1061158912; /* Float: -6f */
			break;
		case 38:
			*uParam1 = { -995308995, -995156222, 1113611829 };
			*uParam2 = { 1102053376 /* Float: 22f */, 1107296256 /* Float: 32f */, 1118568448 /* Float: 86f */ };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -1003338056, -1006205485, 1114484244 /* Float: 59.42f */ };
			*uParam2 = { 1126170624 /* Float: 160f */, 1102053376 /* Float: 22f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 1104150528; /* Float: 26f */
			break;
		case 40:
			*uParam1 = { 1149727441, -1003659624, 1111596204 };
			*uParam2 = { 1110704128 /* Float: 45f */, 1110966272 /* Float: 46f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -999350452, 1158149026, 1134146388 };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1152789332, -993720230, 1119800656 };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 1135492727, -1004059066, 1119748096 /* Float: 95f */ };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 1157300650, 1142573548, 1119748096 /* Float: 95f */ };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 1157840220, -1014136439, 1109917696 /* Float: 42f */ };
			*uParam2 = { 1101529088 /* Float: 21f */, 1105723392 /* Float: 29f */, 1111752704 /* Float: 49f */ };
			*uParam3 = 1112539136; /* Float: 52f */
			break;
		case 46:
			*uParam1 = { -992220692, -1017094537, 1126694912 /* Float: 168f */ };
			*uParam2 = { 1101529088 /* Float: 21f */, 1105723392 /* Float: 29f */, 1122500608 /* Float: 116f */ };
			*uParam3 = 1113587712; /* Float: 56f */
			break;
		case 47:
			*uParam1 = { 1158014525, -996113875, 1118437376 /* Float: 85f */ };
			*uParam2 = { 1109393408 /* Float: 40f */, 1116602368 /* Float: 71f */, 1122500608 /* Float: 116f */ };
			*uParam3 = 1116471296; /* Float: 70f */
			break;
		case 48:
			*uParam1 = { 1158697447, -1012169736, 1118437376 /* Float: 85f */ };
			*uParam2 = { 1097859072 /* Float: 15f */, 1097859072 /* Float: 15f */, 1122500608 /* Float: 116f */ };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -991763276, -988392997, 1116602368 /* Float: 71f */ };
			*uParam2 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1112014848 /* Float: 50f */ };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -988949578, -997246673, 1129709568 /* Float: 214f */ };
			*uParam2 = { 1108606976 /* Float: 37f */, 1107558400 /* Float: 33f */, 1116209152 /* Float: 68f */ };
			*uParam3 = 0f;
			break;
	}
}

bool func_582(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_583(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_600(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_344(bParam1), bParam0, bParam3);
}

bool func_584(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_585(int iParam0)
{
	float fVar0;

	fVar0 = 1f;
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("SHOWER"):
			fVar0 = (fVar0 * 1067450368);
			break;
		case joaat("SANDSTORM"):
		case joaat("THUNDER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("SNOWCLEARING"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			fVar0 = (fVar0 * 1056964608);
			break;
	}
	return fVar0;
}

bool func_586(bool bParam0)
{
	return func_346(bParam0) == 4.324946E+36f;
}

void func_587(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	float fVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_345(bParam0, 0))
	{
		return;
	}
	else if (bParam0 == 4.553053E+26f)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_601() || bParam6)
	{
		func_602(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_603(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_603(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_604(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_346(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_479(bParam0, -5.215192E-33f)) && !func_479(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_461(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_605(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 1.435927E-34f)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	fVar13 = 4.808429E-35f;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		fVar13 = 1.058639E-16f;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_479(bParam0, 6.834376E-22f))
	{
		sVar17 = func_606(bParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.284544E+08f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	if (func_479(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_607(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.101616E-25f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	bVar18 = func_358(bParam0, 0);
	if ((func_608(iVar12) && func_479(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_609(bParam0);
	}
	else if (func_346(bParam0) == -42.1084f)
	{
		bVar19 = func_610(bParam0);
		if (func_345(bVar19, 0))
		{
			bVar18 = func_358(bVar19, 0);
		}
	}
	if (func_611(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_612(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_359(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_613(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_614(bParam0, &cVar22))
		{
			sVar21 = func_216(func_615(cVar22), 4.808429E-35f);
		}
	}
	func_616(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_588(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_345(bParam0, 0))
	{
		return Var0;
	}
	if (func_479(bParam0, -8.087424E+27f))
	{
		if (func_200() == -1)
		{
			if (func_479(bParam0, -3.480943E+19f))
			{
				return func_522(4.052717E-32f);
			}
			else
			{
				return func_522(9918.3f);
			}
		}
	}
	else if (func_479(bParam0, -3.480943E+19f))
	{
		return func_522(-18395.16f);
	}
	if (func_479(bParam0, 4.091206E+36f))
	{
		return func_522(3.674458E+22f);
	}
	return Var2;
}

bool func_589(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	struct<4> Var34;
	int iVar39;
	int iVar40;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	Var0 = { func_481(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam2)
	{
		func_482(&Var0, func_468(0));
	}
	if (!func_483(&Var0, &iVar18, &iVar19, 0))
	{
		return false;
	}
	Var20.f_9 = -5.45926E-19f;
	iVar39 = 0;
	while (iVar39 < iVar19)
	{
		if (iVar40 >= iParam1)
		{
		}
		else
		{
			if (!func_458(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_617(bParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_460(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_590(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_345(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_362(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_618(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_350(bParam0, bParam4, 0) };
	Var6 = { func_351(bParam0, Var1, Var1.f_4, bParam4) };
	return func_617(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

void func_591(int iParam0, bool bParam1, int iParam2)
{
	Global_1940239.f_5 = iParam0;
	Global_1940239.f_37 = iParam2;
	if (bParam1 || (func_619() && iParam2 == 0))
	{
		func_620(1);
		func_621(1);
	}
}

void func_592(var uParam0)
{
	func_560(uParam0, 8.505438E-34f);
	if (func_622() == 3.272964E+34f)
	{
		func_560(uParam0, 8.967694E-17f);
	}
	else
	{
		func_560(uParam0, 1.721179E-28f);
	}
}

void func_593(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_538(uParam0))
	{
		return;
	}
	if (Global_1292096.f_2539 < 20)
	{
		Global_1292096.f_2539++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_2539.f_1[iVar0 /*22*/] = { Global_1292096.f_2539.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1292096.f_2539.f_1[(Global_1292096.f_2539 - 1) /*22*/] = { Var1 };
}

bool func_594(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_595(int iParam0)
{
	if (((((((((((((((((((((((((((((iParam0 == -2.540197E+33f || iParam0 == 0.007720091f) || iParam0 == 8.913652E+14f) || iParam0 == 6.41116E-28f) || iParam0 == -2.391944E-27f) || iParam0 == 6.251295E-13f) || iParam0 == 4.274601E-10f) || iParam0 == 3.872603E+30f) || iParam0 == 48.66112f) || iParam0 == -1.435848E+08f) || iParam0 == 8.426507E+12f) || iParam0 == NaNf) || iParam0 == 2.23625E+08f) || iParam0 == 6.563378E+09f) || iParam0 == -2.061378E+28f) || iParam0 == -4.464995E-17f) || iParam0 == 8.345165E-18f) || iParam0 == 4.988653E-32f) || iParam0 == -8.796708E+07f) || iParam0 == 4.18785E+12f) || iParam0 == 4.201407E-26f) || iParam0 == 4.331522E+15f) || iParam0 == 2.116761E-14f) || iParam0 == 0.1600948f) || iParam0 == -4.992456E-05f) || iParam0 == 6.598377E-37f) || iParam0 == 1.601328E-21f) || iParam0 == 1.449375E+18f) || iParam0 == 7.855662E-13f) || iParam0 == 9.475524E-11f)
	{
		return 0;
	}
	return 1;
}

bool func_596(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_345(bParam0, 0))
	{
		return false;
	}
	if (!func_623(bParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_624(bParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_625(bParam0, bParam2);
	iVar2 = 0;
	if (func_346(bParam0) == -42.1084f)
	{
		if (!func_479(bParam0, 7.396633E-08f) && !func_479(bParam0, -6.685221E-33f))
		{
			bVar3 = true;
		}
	}
	if (func_604(bParam0, 8388608) && !func_454(27))
	{
		func_626(27);
	}
	func_627(bParam0);
	if (!bVar3)
	{
		if (func_479(bParam0, -7.272718E-19f))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_629(func_628(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_200() == -1)
				{
					func_630(bVar1);
				}
				if (func_208(0) && func_631(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_632(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_633(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_346(bParam0) == -3.265313E+23f)
		{
			if (!func_634(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_346(bParam0) == 6.919076E-28f && func_600(bParam0))
		{
			if (!func_635(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_479(bParam0, -1.355837E+35f))
		{
			func_637(func_636(-182.2023f), iVar0);
		}
		else if (bParam0 == 8.064365E+36f)
		{
			func_637(func_638(-1.250509E+13f, 6.875483E+36f), iVar0);
		}
		else if (func_479(bParam0, -3.187887E+34f) && !func_479(bParam0, 3.708451E-17f))
		{
			if (bParam0 != 4.568779E-32f)
			{
				func_639(536, 0);
			}
			if (func_479(bParam0, -2.826186E-34f) || func_479(bParam0, -5.200334E-11f))
			{
			}
		}
		else if (func_479(bParam0, -8.87647E+33f))
		{
			if (func_479(bParam0, -157.5682f))
			{
			}
		}
		else if (func_479(bParam0, -1.641295E-14f) && func_479(bParam0, 888.6404f))
		{
			func_639(519, 0);
		}
		else if (func_479(bParam0, 888.6404f) && func_479(bParam0, -1.086842E+20f))
		{
		}
		else if (func_479(bParam0, 4.619806E-19f))
		{
		}
		else if (func_479(bParam0, 9.243318E-18f))
		{
			if (func_640())
			{
				func_641(7.177414E+09f, 0, 1f, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_479(bParam0, 1.063826E-10f) && func_479(bParam0, 7.561756E-05f))
		{
			func_642(bParam0);
		}
		else if (func_479(bParam0, -1.56509E-23f))
		{
			func_643(bParam0);
		}
		else if (func_479(bParam0, -2.873199E-24f))
		{
			func_644(bParam0);
		}
		else if (func_479(bParam0, -0.08388482f) && func_479(bParam0, 7.561756E-05f))
		{
			func_645(bParam0);
		}
		else if (bParam0 == -2.680077E+18f)
		{
			Global_1940072.f_21 = 0;
		}
		else if (func_479(bParam0, 7.339242E+27f))
		{
			func_646();
		}
		else if (func_479(bParam0, -6.685221E-33f))
		{
		}
		else if (func_479(bParam0, 3.708451E-17f))
		{
		}
		else if (func_479(bParam0, -0.08388482f) && func_479(bParam0, -8.498268E-23f))
		{
		}
		else if (func_479(bParam0, -2.826186E-34f) || func_479(bParam0, -5.200334E-11f))
		{
		}
		else if (func_479(bParam0, -7.721469E-31f))
		{
			return false;
		}
		else if (func_479(bParam0, 37699.67f))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_210(3.397524E-31f, 1))
					{
						func_596(3.397524E-31f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_210(6.760231E-15f, 1))
					{
						func_596(6.760231E-15f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_210(-13818.36f, 1))
					{
						func_596(-13818.36f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_210(4.642866E-20f, 1))
					{
						func_596(4.642866E-20f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_210(-21.88862f, 1))
					{
						func_596(-21.88862f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_210(5.120068E-22f, 1))
					{
						func_596(5.120068E-22f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_479(bParam0, -5.092244E+08f) && func_604(bParam0, 4))
		{
		}
		else if (func_479(bParam0, 9.811189E+11f))
		{
			func_647(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (bParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.126487E+31f;
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -4.003846E-11f;
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 4.742571E+17f;
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.01081E-28f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.95382E-16f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.95382E-16f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2.353932E-30f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2.353932E-30f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -3.627576E-31f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -3.627576E-31f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.722741E+37f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.722741E+37f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -5536.38f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -5536.38f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 7.333728E+10f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 7.333728E+10f;
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -8.132168E-17f;
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_648(272, func_358(-1.263708E+38f, 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_648(270, func_358(1.344431E-31f, 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_648(271, func_358(-7.101952E+23f, 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_649(685, 1.579975E+31f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_649(685, 42.3843f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_649(685, 2.097458E+12f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_649(685, -6.137742E-06f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_649(686, NaNf, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_649(686, -7.923627E-17f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_639(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_639(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_454(1))
				{
					func_639(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_639(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_200() == -1)
				{
					bParam0 = -7.729678E-14f;
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_639(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		bVar5 = bParam0;
		func_650(&bVar5);
		if (!func_633(bVar5, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_208(0))
		{
			return true;
		}
		if (func_346(bParam0) == -42.1084f)
		{
			func_651(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_208(0) && !func_209())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_596(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -4207915f, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_652(iVar2, 0);
		}
	}
	Var30 = { func_588(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_653(bParam0);
	if (fParam6 > 0f)
	{
		if (func_479(bParam0, -5.092244E+08f))
		{
			func_654(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 3787186f;
		func_587(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return true;
}

int func_597(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_564(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = func_569(Global_1149417.f_5701[iVar0]);
	return iVar1;
}

bool func_598(int iParam0)
{
	return func_655(&(Global_1956862.f_1565), iParam0, 1);
}

int func_599(int iParam0)
{
	return func_656(func_598(iParam0));
}

bool func_600(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

bool func_601()
{
	return !Global_1913431;
}

void func_602(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913431.f_3)
	{
		if ((((Global_1913431.f_4[iVar0 /*6*/] == bParam0 && Global_1913431.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913431.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913431.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913431.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913431.f_4[iVar0 /*6*/].f_1 = (Global_1913431.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913431.f_3 < 19)
	{
		Global_1913431.f_4[Global_1913431.f_3 /*6*/] = bParam0;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_1 = iParam1;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_2 = bParam2;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_3 = bParam3;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_4 = bParam4;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_5 = bParam5;
		Global_1913431.f_3++;
	}
}

char* func_603(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_604(bool bParam0, int iParam1)
{
	if (!func_345(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_605(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_606(bool bParam0)
{
	if (func_479(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_479(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_479(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_479(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_479(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_479(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_479(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_479(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_479(bParam0, -1.58908E+26f) || func_479(bParam0, -3.503386E-34f)) || func_479(bParam0, -1.887503E+19f)) || func_479(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_607(bool bParam0)
{
	if (func_479(bParam0, -1.15596E+32f))
	{
		if (((func_657(bParam0, -9.979451E-09f) || func_657(bParam0, 2.758862E+11f)) || func_657(bParam0, 1.868312E+36f)) || func_657(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_479(bParam0, -6.231785E+11f) || func_479(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_608(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_609(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_345(bParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_610(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_658(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_659(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_660(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_661(bVar14))
			{
				func_662(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_662(iVar11);
	}
	return false;
}

bool func_611(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, -60352.49f))
	{
		return true;
	}
	return false;
}

int func_612(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_345(bParam0, 0) && !func_485(func_484(bParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_613(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_663(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_614(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_345(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_215(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_664(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_665(bParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_615(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_616(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	int iVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = fParam4;
	Var13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&Var0, &Var13, bParam8);
	func_666(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_617(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_667(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_474(*iParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_208(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_200() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_668(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_669(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_344(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_618(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_667(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_362(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_208(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_670(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_671(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_668(7.184882E+22f, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var82.f_7 = -5.149929E+33f;
			Var82.f_16 = -1;
			Var82 = bParam3;
			Var82.f_7 = iParam2;
			func_669(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_344(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_619()
{
	if ((Global_1940239.f_11596 != (Global_1940239.f_41.f_203 - 1) || func_673(func_672(0), Global_1940239.f_11588, 0, 1, 1) > 0) || Global_1940239.f_11596 == 15)
	{
		return true;
	}
	func_674(0);
	if (Global_1940239.f_7)
	{
		return true;
	}
	return false;
}

void func_620(int iParam0)
{
	Global_1940239.f_11 = iParam0;
}

void func_621(int iParam0)
{
	Global_1940239.f_10 = iParam0;
}

int func_622()
{
	return Global_1953279.f_1;
}

bool func_623(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_200() == -1)
	{
		if (func_675(bParam0) && func_676(bParam0))
		{
			func_677(bParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (bParam0 == 9605447f)
	{
		bParam2 = true;
	}
	else if (bParam0 == -3.273909E-18f)
	{
		return false;
	}
	return true;
}

bool func_624(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_678(bParam0, iParam1);
	Var0 = { func_350(bParam0, 0, 1) };
	iVar5 = func_573(bParam0, &Var0, 0, 0);
	iVar6 = func_583(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_479(bParam0, -1.690907E-35f))
		{
			func_639(674, 1);
		}
		else if (func_200() == -1)
		{
			func_639(673, 0);
		}
	}
	if (func_679(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_625(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_680())
	{
		return;
	}
	switch (func_681(bParam0, -60352.49f))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940072.f_70.f_5 = 1;
			Global_1940072.f_70.f_6 = 0;
			Global_1940072.f_70.f_1 = bParam0;
			break;
	}
}

void func_626(int iParam0)
{
	if (!func_536(iParam0))
	{
		return;
	}
	func_682(iParam0);
	func_683(iParam0);
}

void func_627(bool bParam0)
{
	if (func_479(bParam0, -1.640085E-16f))
	{
		func_211(-2.462866E+08f, 0, 255, 0, 0);
	}
	else if (func_479(bParam0, -4.561297E+28f))
	{
		func_211(-4249.272f, 0, 255, 0, 0);
	}
	else if (func_479(bParam0, 2.133228E-14f))
	{
		func_211(-5.046843E+11f, 0, 255, 0, 0);
	}
	else if (func_479(bParam0, 5.050617E+08f))
	{
		func_211(2.629104E-17f, 0, 255, 0, 0);
	}
}

bool func_628(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = -7.135455E-16f;
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = -7.135455E-16f;
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = 2.870844E+29f;
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = 2.870844E+29f;
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = 2.176132E+38f;
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_BOLAS"):
			bVar0 = 1284.666f;
			break;
		case joaat("AMMO_POISONBOTTLE"):
			bVar0 = -1.27948E+18f;
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = 5.420628E-33f;
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = 1.96266E-13f;
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = -1.776182E+22f;
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = 1.387712E-18f;
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = -5.528462E+28f;
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = -0.02419633f;
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = -7.093211E-30f;
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = 4.318794E-22f;
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = 1.396023E+32f;
			break;
		default:
			break;
	}
	if (func_345(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_684(bVar0) || func_685(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

bool func_629(bool bParam0, bool bParam1)
{
	if (!func_345(bParam0, 0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return false;
}

void func_630(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 != -1)
	{
		return;
	}
	if (!func_459(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_631(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		Var0 = { func_350(bParam0, 0, 1) };
		if (func_470(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_471(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_351(bParam0, Var0, Var0.f_4, 0) };
				func_617(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_208(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return false;
		}
		func_632(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_686(bParam0, iParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_632(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_600(bParam0))
	{
		return false;
	}
	if (!func_208(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	return true;
}

int func_633(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_345(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_362(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_687(bParam0, iParam1, iParam2);
	}
	Var1 = { func_350(bParam0, 0, 1) };
	Var6 = { func_351(bParam0, Var1, Var1.f_4, 0) };
	return func_688(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_634(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_629(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_200() == -1)
		{
			func_630(bVar0);
			if (iParam1 == 3787186f)
			{
				func_689(bVar0);
			}
		}
		if (!func_679(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_677(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_690(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_631(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_631(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_631(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == 3.3488E-21f && !func_691())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_692(bVar0))
				{
					func_631(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_631(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_693(Global_33, 2, 0, 1);
				if ((((func_459(bVar7) && !Global_26688) && bVar7 != bVar0) && !func_210(-0.0002099206f, 1)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, bVar7);
				}
				if (func_459(bVar7) && func_210(-0.0002099206f, 1))
				{
					if (!func_631(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_631(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_631(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && iParam1 == 3787186f)
	{
		func_639(515, 1);
	}
	return true;
}

int func_635(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_600(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_459(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_33, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(bVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_648(func_694(bParam0), func_358(bParam0, 0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_208(0))
	{
		if (func_632(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_633(bParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_636(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_637(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_638(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_639(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_695(iParam0, &iVar0, &iVar1);
	if (!func_696(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_697(iVar0, iVar1);
}

bool func_640()
{
	return false;
}

int func_641(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_200() == 0)
	{
		func_652(iParam0, 0);
		return 0;
	}
	iVar0 = func_698(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_699(iVar0, sParam4, iParam5, 0);
	}
	func_700(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_642(bool bParam0)
{
}

void func_643(bool bParam0)
{
}

void func_644(bool bParam0)
{
}

void func_645(bool bParam0)
{
}

void func_646()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-9.596595E-08f) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-9.596595E-08f, -3.936833E-09f, 1);
	}
}

void func_647(bool bParam0, int iParam1)
{
	var uVar0;

	func_480(bParam0, iParam1, &uVar0);
}

void func_648(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_695(iParam0, &iVar0, &iVar1);
	if (!func_696(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_701(iParam0, 1024))
	{
		return;
	}
	func_697(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_649(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_695(iParam0, &iVar0, &iVar1);
	if (!func_696(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_701(iParam0, 1024))
	{
		return;
	}
	func_697(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = fParam1;
	if (!bParam3)
	{
		Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

void func_650(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = -1.177047E+07f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = 2.106782E+14f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = 1.62503E-31f;
			break;
	}
}

void func_651(bool bParam0)
{
	if (func_200() != -1)
	{
		return;
	}
}

bool func_652(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return false;
	}
	Var4.f_1 = 10;
	func_560(&Var4, 2.95884E+10f);
	return func_561(iParam0, &Var4, &uVar0, iParam1, 0);
}

void func_653(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_654(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_702(Global_1902818.f_37);
	func_616(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_703(bParam0), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_655(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_656(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_657(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 512441.5f))
	{
		return 1;
	}
	return 0;
}

int func_658(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_345(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, -9.085264E+22f, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_659(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -5.45926E-19f)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -5.45926E-19f)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_660(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_661(bool bParam0)
{
	if (!func_345(bParam0, 0))
	{
	}
	if (func_479(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_662(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_663(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

bool func_664(bool bParam0)
{
	if (func_461(bParam0) == -1.955052E+34f || func_461(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_665(bool bParam0)
{
	int iVar0;

	if (!func_345(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_609(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

void func_666(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

bool func_667(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_668(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_704(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_706(func_705(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_707(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_669(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_670(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_362(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_708(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_671(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_351(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_672(int iParam0)
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_673(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_217(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_709(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_710(bParam1, bParam4));
	}
	return iVar0;
}

void func_674(int iParam0)
{
	if (!func_345(Global_1940239.f_11588, 0))
	{
		Global_1940239.f_7 = iParam0;
	}
	else if ((((func_681(Global_1940239.f_11588, 512441.5f) != 0 && Global_1940239.f_11587 != 0) && Global_1940239.f_11587 != -2.509875E-36f) && !Global_1915643.f_20638) && !Global_1915643.f_22504.f_1)
	{
		Global_1940239.f_7 = 1;
	}
	else
	{
		Global_1940239.f_7 = 0;
	}
}

bool func_675(bool bParam0)
{
	return func_346(bParam0) == -3.265313E+23f;
}

bool func_676(bool bParam0)
{
	var uVar0;

	if (func_200() != -1)
	{
		return false;
	}
	if (func_604(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_679(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_210(bParam0, 1);
}

void func_677(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_346(bParam0) != -3.265313E+23f)
	{
		return;
	}
	bVar0 = func_629(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_685(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_217(bParam0, 0, 0, 0) == 0))
		{
			if (func_200() == -1)
			{
				func_630(bVar0);
			}
			if (!*bParam3 && !iParam4 == 3787186f)
			{
				func_587(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_678(bool bParam0, int iParam1)
{
	if (func_479(bParam0, 7.644572E-37f))
	{
		func_612(bParam0, -982726.7f, iParam1, 1);
	}
}

bool func_679(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_711(&bParam0);
	if (!func_345(bParam0, 0) && !func_485(func_484(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_362(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_675(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_468(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_470(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_471(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_469(bParam0, 1))
		{
			if (!func_470(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_471(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_573(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_541(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_680()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_712(Global_33, 8.330918E+10f)) && !func_712(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

int func_681(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

void func_682(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_38.f_3651[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_38.f_3651[iVar1] = uVar3;
}

void func_683(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_713(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_714(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_714(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_714(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_715(1);
			break;
		case 33:
			func_716(1);
			break;
		case 34:
			func_717(1);
			break;
		case 35:
			break;
		case 36:
			func_718(0);
			break;
		case 37:
			func_719(0);
			break;
		case 38:
			func_720(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_721() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_722("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_639(677, 0);
			break;
		case 3:
			if (func_721() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_722("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_639(678, 0);
			break;
		case 4:
			if (func_721() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_722("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_639(679, 0);
			break;
		case 5:
			if (func_721() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_722("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_639(680, 0);
			break;
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.628467E+31f, true);
			UNLOCK::UNLOCK_SET_VISIBLE(-4.628467E+31f, true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
		case 47:
			if (func_200() == -1)
			{
				if (!func_210(0.01458261f, 1))
				{
					func_633(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_200() == -1)
			{
				if (!func_210(0.01458261f, 1))
				{
					func_633(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_210(7.734759E-34f, 1))
				{
					func_633(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_200() == -1)
			{
				if (!func_210(1.044822E-10f, 1))
				{
					func_633(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_200() == -1)
			{
				if (!func_210(1.044822E-10f, 1))
				{
					func_633(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_210(-1.840652E+20f, 1))
				{
					func_633(-1.840652E+20f, 1, 6.028273E-12f);
				}
			}
			break;
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			UNLOCK::UNLOCK_SET_UNLOCKED(-3.989886E+08f, true);
			Global_1940186.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(-1.056862E+36f, true);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(-1.092788E+25f, true);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(2.756398E-28f, true);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.80995E-29f, true);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(8.669974E+11f, true);
			break;
	}
}

bool func_684(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_685(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

void func_686(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_723(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_687(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_345(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_362(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_350(bParam0, 0, 0) };
	if (func_679(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_208(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_344(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_688(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_345(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_679(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_208(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_344(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_689(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940186.f_6)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_33, sVar0, bParam0);
	iVar2 = func_337();
	func_724(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

int func_690(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_725(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, 0.0001101296f) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_691()
{
	return false;
}

bool func_692(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_693(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_694(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_454(49))
			{
				if (!func_454(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_454(50))
			{
				if (!func_454(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_695(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_696(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_726(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_727(iParam0))
	{
		return false;
	}
	if (func_728(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_701(iParam0, 1)) || func_729(32768))
	{
		if (!func_701(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_730())
	{
		return false;
	}
	return true;
}

void func_697(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_698(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_200() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_210(6.217872E+26f, 1))
	{
		fVar0 = (fVar0 + 1036831949);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_33, true, true, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == 3.996812E+36f)
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = Var1.f_1[iVar24];
			if (func_345(bVar25, 0) && func_479(bVar25, -7.721469E-31f))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_699(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_731(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_616(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_700(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_732() || func_733())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 1036831949));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_616(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -3.959475E-32f, 0, 4.808429E-35f, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_616(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 6.028273E-12f);
		func_637(func_522(6.480143E+20f), iVar1);
	}
}

bool func_701(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

char* func_702(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

float func_703(bool bParam0)
{
	var uVar0;

	if (!func_734(bParam0, &uVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		return -0.1987056f;
	}
	return uVar0;
}

bool func_704(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_735(iParam1->f_8, iParam0, iVar0, 2048) || func_735(iParam1->f_8, iParam0, iVar0, 32768)) || func_735(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_735(iParam1->f_8, iParam0, iVar0, 4) || func_735(iParam1->f_8, iParam0, iVar0, 256)) || func_735(iParam1->f_8, iParam0, iVar0, 65536)) || func_735(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_735(iParam1->f_8, iParam0, iVar0, 1) || func_735(iParam1->f_8, iParam0, iVar0, 8)) || func_735(iParam1->f_8, iParam0, iVar0, 65536)) || func_735(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_735(iParam1->f_8, iParam0, iVar0, 1) || func_735(iParam1->f_8, iParam0, iVar0, 16)) || func_735(iParam1->f_8, iParam0, iVar0, 2)) || func_735(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_735(iParam1->f_8, iParam0, iVar0, 8) || func_735(iParam1->f_8, iParam0, iVar0, 4096)) || func_735(iParam1->f_8, iParam0, iVar0, 256)) || func_735(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_705(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_706(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_736(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_736(iParam1, 2, 0, 0);
	return -1;
}

int func_707(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_736(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_708(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_737(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_539() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_709(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_738(bParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1903834.f_113[iVar1 /*96*/].f_1 == bParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_739(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
		}
	}
	return 0;
}

int func_710(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_740())
	{
		return func_541(bParam0, func_467(1), -3.233114E-34f, 1, 1, 0);
	}
	return 0;
}

int func_711(bool bParam0)
{
	if (!func_345(*bParam0, 0))
	{
		return 0;
	}
	if (!func_741(*bParam0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = -7.975852E-25f;
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = -1.072744E-16f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = 1.62503E-31f;
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = -1.6957E+27f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = -1.177047E+07f;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_712(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_713(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}
}

void func_714(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956862.f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956862.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956862.f_5.f_7, iParam0);
		if (iVar0 == Global_1956862.f_5.f_14[iParam0 /*102*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956862.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956862.f_5.f_14[iParam0 /*102*/]);
}

void func_715(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
}

void func_716(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
}

void func_717(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
}

void func_718(bool bParam0)
{
	float fVar0;

	fVar0 = 1.203047E-24f;
	if (bParam0)
	{
		HUD::_ENABLE_HUD_CONTEXT(fVar0);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(fVar0);
	}
}

void func_719(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

void func_720(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

bool func_721()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_722(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = fParam2;
	Var13.f_5 = fParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam9, bParam10);
	return iVar21;
}

int func_723(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_724(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_742(*iParam0);
	iVar1 = func_743(*iParam0);
	iVar2 = func_744(*iParam0);
	iVar3 = func_338(*iParam0);
	iVar4 = func_339(*iParam0);
	iVar5 = func_745(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_746(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_746(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_747(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_725(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

bool func_726(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_727(int iParam0)
{
	if (func_701(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_728(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_38.f_3542)
	{
		if (Global_38.f_3542[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_38.f_3542[iVar0 /*3*/]);
			if (Global_38.f_3542[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904398.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_729(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_730()
{
	if (!func_748())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

void func_731(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_749())
	{
		Global_1913431.f_125 = MISC::GET_GAME_TIMER();
		Global_1913431.f_126 = iParam1;
	}
	Global_1913431.f_127 = (Global_1913431.f_127 + iParam0);
}

bool func_732()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

bool func_733()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

bool func_734(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_735(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_122(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_736(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_750(iParam0, iParam1, iParam2, iParam3);
}

bool func_737(var uParam0)
{
	if (!func_751(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

bool func_738(bool bParam0)
{
	if (!func_611(bParam0, 9.300934E+31f))
	{
		return false;
	}
	if (!func_752(bParam0, 1))
	{
		return false;
	}
	return true;
}

int func_739(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_345(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_753(iParam0, bParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &Var0, false);
	return iVar4;
}

bool func_740()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_754(iVar0))
	{
		return false;
	}
	return true;
}

bool func_741(bool bParam0)
{
	return func_479(bParam0, 5.168749E+07f);
}

int func_742(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_755(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_743(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_744(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_745(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_746(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_747(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_756(iParam0, iParam6);
	func_757(iParam0, iParam5);
	func_758(iParam0, iParam4);
	func_759(iParam0, iParam3);
	func_760(iParam0, iParam2);
	func_761(iParam0, iParam1);
}

bool func_748()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_749()
{
	return Global_1913431.f_127 == 0;
}

void func_750(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1292096.f_20 < 20)
	{
		Global_1292096.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_20.f_1[iVar0 /*21*/] = { Global_1292096.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_762(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_751(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_752(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_763(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_753(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_764(iParam0) };
	return func_765(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_754(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return true;
		default:
			break;
	}
	return false;
}

int func_755(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_756(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 2.658456E+36f));
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 = (*iParam0 || 0f);
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - (*iParam0 && 0f));
	}
}

void func_757(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_758(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_743(*iParam0);
	iVar1 = func_742(*iParam0);
	if (iParam1 < 1 || iParam1 > func_746(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_759(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_760(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_761(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_762(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_766(&(uParam0->f_4));
}

int func_763(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_764(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_765(iParam0, 2.982335E+09f, func_539(), -5.45926E-19f) };
	Var0.f_4 = 4.978612f;
	return Var0;
}

struct<4> func_765(int iParam0, bool bParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_345(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &Var0);
	return Var0;
}

void func_766(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -5.149929E+33f;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

